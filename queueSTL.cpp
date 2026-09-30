#include <iostream>
#include <queue>
using namespace std;

int main(){


    queue <string> q;

    q.push("10");
    q.push("20");
    q.push("30");

    cout<< "top element is: " << q.front() << endl;

    q.pop();

        cout<< "top element is: " << q.front() << endl;
        cout<< "size is: " << q.size() << endl;

    q.push("40");
    
    cout<< "size is: " << q.size() << endl;
    cout<< "is empty : " << q.empty() << endl;


}