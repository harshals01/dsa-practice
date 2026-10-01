#include <iostream>
#include <queue>
using namespace std;

int main(){


    priority_queue<string> pq;

    priority_queue<int,vector<int>, greater<int>> mini;

pq.push("10");
pq.push("20");
pq.push("30");

    cout<< "top element is: " << pq.top() << endl;

    pq.pop();

        cout<< "top element is: " << pq.top() << endl;
        cout<< "size is: " << pq.size() << endl;

    pq.push("40");
    
    cout<< "size is: " << pq.size() << endl;
    cout<< "is empty : " << pq.empty() << endl;

    for (int i = 0 ; i< pq.size(); i++)
    {
        cout << " " << pq.top();
        pq.pop();
        cout << endl;
    }

    mini.push(5);
    mini.push(10);
    mini.push(1);
    mini.push(16);

    cout<< "mini size: " << mini.size()<< endl;

    int m = mini.size();
for (int i = 0; i < m; i++)
{
    cout << mini.top() << " " ;
    mini.pop();
}
    cout<<endl;

    




}