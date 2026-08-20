#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;
    // formula is optimized to address int value 2^31-1 issue 
    int mid = s + (e-s)/2;
    int ans=-1;

    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid-1;
        }

        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else 
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

int lastOcc(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;
    int ans= -1;

    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans =mid;
            s = mid+1;
            
        }

        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else 
        {
            s = mid + 1;
    }
        mid = s + (e-s)/2;
    }
    return ans;
}

    int main()
    {

        int even[7] = {2, 4, 6, 8, 10, 14,10};
        int odd[5] = {3, 5, 7, 9, 13};

        int index= firstOcc(even, 7, 10);
        int index2= lastOcc(even, 7, 10);


        cout << "first index is: " << index <<endl ;
        cout << "last index is: " << index2 <<endl ;

        return 0;
    }
