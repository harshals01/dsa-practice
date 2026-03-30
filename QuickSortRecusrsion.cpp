#include <iostream>
using namespace std;

int partition(int *arr, int s, int e) {

        int pivot = arr[s];

        int count = 0;
        for (int i = s + 1; i <= e; i++)
        {
            if (arr[i] <= pivot)
            {
                count++;
            }
        }

        int pivotIndex = s + count;
        swap(arr[pivotIndex], arr[s]);

        int i = s, j = e;

        while (i < pivotIndex && j > pivotIndex)
        {
            while (arr[i] < pivot)
            {
                i++;
            }

            while (arr[j] > pivot)
            {
                j--;
            }

            if (i < pivotIndex && j > pivotIndex)
            {
                swap(arr[i++], arr[j--]);
            }
        }
    }

void quicksort(int *arr, int s, int e)
{

    if (s >= e)
    {
        return;
    }

    partition( arr, s , e);
    
    }


int main()
{

    int arr[] = {10, 8, 5, 13, 19, 19, 72, 65, 65, 100};
    int n = 10;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    

    return 0;
}
