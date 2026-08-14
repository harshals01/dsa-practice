#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> IntersectionArray(vector<int> &num1, vector<int> &num2)
{

    int n = num1.size();
    int m = num2.size();

    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (num1[i] == num2[j])
        {
            ans.push_back(num1[i]);
            i++;
            j++;
        }
        else if (num1[i] < num2[j])
        {
            i++;
        }
        else
        {
            j++;
        }

    }
            return ans;

}

int main()
{

    vector<int> num1 = {2, 3, 5, 14, 9, 4};
    vector<int> num2 = {3, 4, 8, 9};

    sort(num1.begin(), num1.end());
    sort(num2.begin(), num2.end());


    vector<int> ans = IntersectionArray(num1, num2);

    for (int x: ans){
        cout << x << " ";
    }

    return 0;
}