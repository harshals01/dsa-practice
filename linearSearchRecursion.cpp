#include <iostream>
using namespace std;

void printArray(int arr[], int n){

    cout << "size of array is" << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }   cout << endl;

    
}


bool linearSearch(int arr[], int n, int k){

    printArray(arr, n);

if (n == 0)
{
    return false;
}

if (arr[0] == k)
{
    return true;
}
else{
    bool remainingPart = linearSearch( arr+1, n-1, k);
    return remainingPart;
}


}

int main(){

    int arr[5] = {3,5,1,4,6};
    int n = 5; //size
    int k = 6;

    bool ans = linearSearch(arr, n , k);

    if (ans)
    {
        cout << "element present" << endl;

    }
    else
    {
        cout << "element absent" << endl;
    }
    
    
    
}
