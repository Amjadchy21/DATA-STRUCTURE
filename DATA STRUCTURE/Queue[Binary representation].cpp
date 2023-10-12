#include<bits/stdc++.h>
using namespace std;


int main()
{
    queue<string>q;
//    First push 1.......
    q.push("1");
    cout<<"How many number : ";
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Binary representation of "<<i<<" : "<<q.front()<<endl;
        string tmp = q.front();
        q.pop();
        q.push(tmp + "0");
        q.push(tmp + "1");
    }

    return 0;
}
