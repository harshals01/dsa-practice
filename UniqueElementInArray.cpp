#include <iostream>
using namespace std;

bool isUnique(int arr[], int size, int n){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n){

            int count = 0;
    
    for (int i = 0; i < size; i++)
    {
          
        if (n == arr[i])
        {
            count++;
        }

        if (count >=2 )
        {
            cout << "element is not unique " << endl;
            return 0;
        }       
    }
    cout << "element is unique " << endl;
    return 1;

        }
    }
    cout << "element not in array";
}

int main(){


    int one[5] = {2,5,3,2,9};
    cout << "input element: " <<endl;
    int n;
    cin >> n;
    isUnique(one, 5, n);

    
    return 0;
}