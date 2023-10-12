#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(5);
    cout<<q.front()<<endl;
    cout<<"Size "<<q.size()<<endl;
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    cout<<"Size "<<q.size()<<endl;
    cout<<"Empty "<<q.empty()<<endl;

    queue<char> q2;
    q2.push('a');
    q2.push('m');
    q2.push('j');
    cout<<"Char size "<<q2.size()<<endl;
    cout<<q2.front()<<endl;




    return 0;
}

