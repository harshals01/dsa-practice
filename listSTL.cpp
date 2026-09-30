#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> l;
    
    l.push_front(2);
    l.push_back(1);   

    list<int> n(5,200);

    cout << "elements are: " << endl;
    for (int i:l)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "elements are: " << endl;
    for (int i:n)
    {
        cout << i << " ";
    }


    cout << endl;
    
    // d.erase(d.begin(),d.begin()+2);
    //     cout << "elements are: " << endl;
    // for (int i:d)
    // {
    //     cout << i << " ";
    // }



}