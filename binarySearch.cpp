#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;
    int mid = (s+e)/2;

    while (s <= e)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}

    int main()
    {

        int even[6] = {2, 4, 6, 8, 10, 14};
        int odd[5] = {3, 5, 7, 9, 13};

        int index= binarySearch(even, 6, 10);

        cout << "index is: " << index <<endl ;

        return 0;
    }
