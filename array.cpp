#include <iostream>
using namespace std;


void printArray(int arr[], int size){

    cout << "array is: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i]  ;
    }

    
}

int main(){

    int one[15] = {2,5};
    printArray(one, 15);
    cout << endl ;


    int oneSize = sizeof(one)/ sizeof(int);

    cout << "size of one is: " << oneSize;
    return 0;
}