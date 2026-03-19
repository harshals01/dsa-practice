#include <iostream>
using namespace std;

void reverseString(int i, int j, string &name)
{

    if (i > j)
    {
        return;
    }

    swap(name[i], name[j]);
    i++;
    j--;

    reverseString(i, j, name);
}

int main()
{

    string name = "cowlick";


    reverseString(0, name.length() - 1, name);
        cout << name << endl;
        


    return 0;
}
