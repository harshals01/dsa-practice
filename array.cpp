#include <iostream>
#include <limits.h>
using namespace std;

// void printArray(int arr[], int size)
// {

//     cout << "array is: " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cout << " " << arr[i];
//     }
// }

int getMax(int arr[], int size)
{

    int max1 = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        max1 = max( max1, arr[i]);
    }
    return max1;
}

int getMin(int arr[], int size)
{

    int min1 = INT_MAX;

    for (int i = 0; i < size; i++)
    {
      min1 = min(min1, arr[i]);
    }
    return  min1;

}

int main()
{

    int size;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cout << "size of arr is: " << size << endl;
    cout << "max element in arr is: " << getMax(arr, size) << endl;
    cout << "min element in arr is: " << getMin(arr, size);
}