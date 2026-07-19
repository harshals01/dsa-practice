#include <iostream>
using namespace std;

int updateArr(int arr[], int n){

    cout << "func call" << endl;
    arr[2] = 120;   

        for (int i = 0; i < 3; i++)
    {
            cout <<arr[i] << " ";
    } cout<<endl;

}

int main(){

    int arr[3] = {1,2,4};


        cout << "main func" << endl;

    for (int i = 0; i < 3; i++)
    {
            cout <<arr[i] << " ";
    } cout<<endl;

    updateArr(arr, 3);
    

    return 0;
}