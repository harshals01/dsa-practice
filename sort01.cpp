#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{

    int i = 0, j = n-1;

    while (i < j)
    {
        while (i<j && arr[i] == 0)
        {
            i++;
        }
        while (i<j && arr[j] == 1)
        {
            j--;
        }

        
        if(i<j){
                    swap(arr[i], arr[j]);
                    i++;
                    j--;

        }
    }
}

int main()
{

    int arr[] = {0, 1, 0, 1, 1, 0, 1};
    sortOne(arr, 7);
    cout << "sorted array is: " << endl;
    printArray(arr, 7);

    return 0;
}