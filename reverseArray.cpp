#include <iostream>
#include <utility>
using namespace std;

int revArray(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int printArr(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[4] = {-2, 6, -7, 3};
    revArray(arr, 4);
    printArr(arr,4);



    return 0;
}
