#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int> arr, int n){

    int s=0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid] >= arr[0])
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

int main(){

    vector<int> arr = {10,13,17,2,5,8};
    int index = getPivot(arr, 6);
    cout << " index is: " << index <<endl;

    return 0;

}