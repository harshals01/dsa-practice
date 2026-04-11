#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << " enter the nos: " << endl;
    cin >> a;
    cin >> b;

    char operation;
    cout << " enter operation(+, -, *, /) " << endl;
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << (a+b) << endl;
        break;

    case '-':
        cout << (a-b) << endl;
        break;

    case '*':
        cout << (a*b) << endl;
        break;

    case '/':
        cout << (a/b) << endl;
        break;
    }

    return 0;
}
