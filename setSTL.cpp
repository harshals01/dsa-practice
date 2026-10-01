#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;

    s.insert(0);
    s.insert(45);
    s.insert(6);
    s.insert(1);
    s.insert(2);

    for (int i:s)
    {
        cout << i << endl;
    }
    

    set<int> :: iterator it = s.begin();
    it++;

    s.erase(it);

    for (int i:s)
    {
        cout << i << endl;
    }
    
    cout << "is 45 present: " << s.count(45) << endl;

    set<int>:: iterator itr = s.find(6);

    for (auto it = itr; it!=s.end(); it++)
    {
        cout << *it << " " << endl;
    }cout << endl;
    

}
