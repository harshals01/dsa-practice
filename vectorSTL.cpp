#include <iostream>
#include <vector>
using namespace std;

int main(){


    vector<int> v;
    cout << v.capacity() << endl;

    v.push_back(3);
    cout << v.capacity() << endl;

    v.push_back(4);
    cout << v.capacity() << endl;

    v.push_back(8);
    cout << v.capacity() << endl;

    v.push_back(9);
    cout << v.capacity() << endl;

   cout<< "size is: " << v.size() << endl;

   cout << "element at 2nd index: " << v.at(2) <<endl;

   v.pop_back();
   cout << "after pop" << endl;
    for (int i:v){
        cout << i <<" ";
    }




}