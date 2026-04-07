#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    cout << "size: " << v.capacity() << endl;

    v.push_back(2);
    cout << "size: " << v.capacity() << endl;

    v.push_back(3);
    cout << "size: " << v.capacity() << endl;

     v.push_back(4);
    cout << "size: " << v.capacity() << endl;


    v.pop_back();
    cout << "size: " << v.size() << endl;

    v.front();
    cout << "front: " << v.front() << endl;

     v.back();
    cout << "back: " << v.back() << endl;

    for (int i : v)
    {
        cout << i << " " ;
    }
    
    cout<< endl;

    v.pop_back();
     for (int i : v)
    {
        cout << i << " ";
    }


    return 0;
}