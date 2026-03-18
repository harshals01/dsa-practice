#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    cout << "array size is " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    
}

bool BinarySearch(int arr[], int s, int e, int key){


    if (s>e)
    {
        return false;
    }
    
    int mid = s + (e-s)/2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return BinarySearch(arr, mid+1, e, key  );
    }
    else{
        return BinarySearch(arr, s, mid -1 , key);
    }
    
    
    
}

int main(){ 



    int arr[6] = {2,4,5,6,13,15};
    int key = 5;
            printArray(arr, 6);


    cout << "element present or not " << BinarySearch(arr, 0, 5, key) << endl;


    return 0;


}


