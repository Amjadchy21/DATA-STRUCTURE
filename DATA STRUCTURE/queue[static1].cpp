#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 50;

class Queue
{
public:
    int a[MAX_SIZE];
    int l,r;

    Queue()
    {
        l = 0;
        r = -1;
    }

    void enqueue(int value)
    {
        if(r+1 >= MAX_SIZE)
        {
            cout<<"Queue is full."<<endl;
            return;
        }
        r++;
        a[r] = value;
    }

    void dequeue()
    {
        if(l > r)
        {
            cout<<"Queue is empty."<<endl;
            return;
        }
        l++;
    }

    int front()
    {
        if(l > r)
        {
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return r-l+1;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.size()<<endl;

    return 0;
}
