class Solution {
public:

int getPivot(vector<int>& nums, int n){

    int s=0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if (nums[mid] >= nums[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;       
    }
    return s;
    
}

int binarySearch(vector<int>& nums, int s,int end, int target)
{

    int start = s;
    int e = end;
    int mid = start + (e-start)/2;

    while (start <= e)
    {

        if (nums[mid] == target)
        {
            return mid;
        }

        if (target < nums[mid])
        {
            e = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (e-s)/2;
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums, nums.size());
        if(target >= nums[pivot] && target <= nums[nums.size()-1]){

            return binarySearch(nums, pivot, nums.size()-1, target);
        }
        else{
            return binarySearch(nums, 0,pivot-1, target);

        }        
    }
};
