#include <iostream>
using namespace std;

bool isEven(int a){

    if (a&1)
    {
        return 0;
    }
    return 1;
    
}

int main(){

    int a;
    cin >> a;
    
    int ans = isEven(a);

    if (isEven(a))
    {
        cout << "no. is even ";
    }
    else
    cout << "no. is odd";
    

     
} 