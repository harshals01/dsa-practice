#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

vector<int> threeSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (nums[i] + nums[j] + nums[k] == target){
                    return {nums[i], nums[j], nums[k]};
                }
            }
        }
    }
    return {};
};

int main()
{

    vector<int> nums = {2, 3, 5, 14, 9, 4};

    sort(nums.begin(), nums.end());

    vector<int> ans = threeSum(nums, 16);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}