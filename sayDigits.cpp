#include <iostream>
using namespace std;

void saydigits(int n, string arr[]){

    if (n==0)
    {
        return;
    }

     
   int digit = n%10;
    int num= n/10;
   
    
    saydigits(num,arr);
     cout<< arr[digit] << " "  ;
}

int main() {
    
    int n;
    cout<< "enter no.:" <<endl;
    cin >> n;
   string arr[10]={"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


   cout << endl;

   saydigits(n,arr);
   
      cout << endl;

  
  

    return 0;
}
