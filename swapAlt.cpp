#include <iostream>
using namespace std;

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void swapAlt(int arr[], int n){

    for (int i = 0; i < n; i = i+2)
    {
        if (i+1 < n)
        {
            swap(arr[i], arr[i+1]);
        }
        
    }  
}

int main(){

    int even[6] = {3,5,8,1,7,2};
    int odd[5] = {11,51,87,19,7};

    cout<< " array after alt swapping: " << endl;

    swapAlt(even,6);
    printArray(even, 6);
    cout<< endl;

    cout<< " array 2 after alt swapping: " << endl;

    swapAlt(odd,5);
    printArray(odd, 5);

    


    return 0;
}