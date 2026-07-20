#include <iostream>
using namespace std;

bool search(int arr[], int n, int m)
{

    for (int i = 0; i <= n; i++)
    {
        if (m == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {2, -4, 7, 12, 45, -6, 3, 6, 1, 21};

    cout << "element: " << endl;
    int m;
    cin >> m;

    bool found = search(arr, 10, m);

    if (found)
    {
        cout << "present ";
    }
    else
    {
        cout << "not present";
    }

    return 0;
}