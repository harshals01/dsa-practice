#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> d = {10,20,30,40};

    cout << "size is: " << d.size();

    d.push_back(50);

    cout << "elements are: " << endl;
    for (int i:d)
    {
        cout << i << " ";
    }

    cout << endl;
    
    d.erase(d.begin(),d.begin()+2);
        cout << "elements are: " << endl;
    for (int i:d)
    {
        cout << i << " ";
    }



}