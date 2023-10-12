#include<bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *a;
    int l,r;
    int Q_size,Q_capacity;
    Queue()
    {
        a = new int[1];
        Q_capacity = 1;
        l = 0;
        r = -1;
        Q_size = 0;
    }
    void enqueue(int value)
    {
        if(r+1>=Q_size)
        {
            int *tmp;
            tmp = new int[Q_capacity*2];
            for(int i=0;i<Q_size;i++)
                tmp[i] = a[i];
            swap(tmp,a);
            Q_capacity*=2;
        }
        r++;
        a[r] = value;
        Q_size++;
    }
    void dequeue()
    {
        if(l>r)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        l++;
        Q_size--;
    }
    int Front()
    {
        if(l>r)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return a[l];
    }
    int queue_size()
    {
        return Q_size;
    }
};
int main()
{
    Queue q;
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(6);
    cout<<"Queue Size "<<q.queue_size()<<endl;
    cout<<q.Front()<<endl;
    q.dequeue();
    cout<<q.Front()<<endl;
    q.dequeue();
    cout<<"Queue Size "<<q.queue_size()<<endl;
    cout<<q.Front()<<endl;
    q.dequeue();
    cout<<q.Front()<<endl;
    q.enqueue(3);
    cout<<q.Front()<<endl;
    q.enqueue(5);
    cout<<q.Front()<<endl;
    cout<<"Queue Size "<<q.queue_size()<<endl;

    return 0;
}
