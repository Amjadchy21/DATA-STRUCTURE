#include<bits/stdc++.h>
using namespace std;

const int max_size = 500;

class Queue
{
public:
    int a[max_size];
    int l,r;
    int sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }

    void enqueue(int value)
    {
        if(sz == max_size)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        r++;
        if(r == max_size-1)
        {
            r =0;
        }
        a[r] = value;
        sz++;
    }
    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        l++;
        if(l == max_size)
        {
            l = 0;
        }
        sz--;
    }
    int Front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return a[l];
    }
    int Queue_size()
    {
        return sz;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);

    cout<<"Size = "<<q.Queue_size()<<endl;
    cout<<q.Front()<<endl;
    q.dequeue();
    cout<<q.Front()<<endl;
    q.dequeue();
    cout<<q.Front()<<endl;
    q.dequeue();
    cout<<"Size = "<<q.Queue_size()<<endl;

    return 0;
}

