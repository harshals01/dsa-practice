#include <iostream>
using namespace std;

bool isPalindrome(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }

    else
    {
        return isPalindrome(str, i + 1, j);
    }
}

int main()
{

    string str = "B1221C";
    int n = 6;
    cout << "original string: " << str;
    cout << endl;

    bool ans = isPalindrome(str, 0, str.length() - 1);

    if (ans)
    {
        cout << "its a palindrome" << endl;
    }
    else
    {
        cout << "its not a palindrome" << endl;
    }

    return 0;
}
