#include <iostream>
using namespace std;

int SumArray( int arr[], int n){

    if (n == 0 )
    {
        return 0;
    
    }
    if (n == 1)
    {
        return arr[0];

    }  
    return  arr[n-1] + SumArray(arr, n-1);
    
    }

int main(){

    int n = 5;
    int arr[5] = {3,2,5,1,6};
    // cout << "array is" << arr[n] << endl;

    cout << SumArray(arr , n)<< endl;


    

}

