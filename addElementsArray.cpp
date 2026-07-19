#include <iostream>
using namespace std;

int addElements(int arr[], int n){

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum is: " << sum;
    return sum;    
}

int main(){

    int n;
    cout << "enter size: " << endl;
    cin >> n;
    int arr[n];

    cout << "enter elements: " << endl;


    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    } cout << endl;


    cout << "elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    
    addElements(arr, n);
    
}