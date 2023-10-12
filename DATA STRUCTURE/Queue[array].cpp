#include<bits/stdc++.h>
using namespace std;

const int max_size = 500;

class Queue
{
public:
    int a[max_size];
    int l,r;

    Queue()
    {
        l = 0;
        r = -1;
    }

    void enqueue(int value)
    {
        if(r+1 >= max_size)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        r++;
        a[r] = value;
    }
    void dequeue()
    {
        if(l > r)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        l++;
    }
    int Front()
    {
        if(l > r)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return a[l];
    }
    int Queue_size()
    {
        return r-l+1;
    }
};

int main()
{
    Queue q;
    cout<<"Number of elements ";
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"NUMBER "<<i+1<<" = ";
        int p;cin>>p;
        q.enqueue(p);
    }

    for(int i=0;i<n;i++)
    {
        cout<<"Front Element = "<<q.Front()<<endl;
        q.dequeue();
    }

    return 0;
}
