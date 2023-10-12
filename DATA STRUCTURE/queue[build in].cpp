#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);

    cout<<"Queue size "<<q1.size()<<endl;

    cout<<"Front "<<q1.front()<<endl;
    q1.pop();
    cout<<"Front "<<q1.front()<<endl;
    q1.pop();
    cout<<"Front "<<q1.front()<<endl;
    q1.pop();

    cout<<"Queue size "<<q1.size()<<endl;

    return 0;
}
