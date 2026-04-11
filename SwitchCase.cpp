#include <iostream>
using namespace std;

int main(){ 

    char ch = '2';
    int num = 2;

    cout << endl;


    switch (ch)
    {
    case 1:
        cout << "one" << endl;
        break;

        case '2': 
        switch (num)
        {      case 2: cout << "num is " << num << endl;
            break;
        }
        // cout << "two" << endl;
        break;
    
    default:
        cout << "none" << endl;

        break;
    }


    return 0;


}


