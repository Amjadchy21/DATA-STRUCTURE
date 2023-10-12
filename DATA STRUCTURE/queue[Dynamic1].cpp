#include<bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *a;
    int l,r;
    int sz;
    int arr_size;

    Queue()
    {
        a = new int[1];
        arr_size = 1;


        l = 0;
        r = -1;
        sz = 0;
    }
    void removeCircular()
    {
        if(l>r)
        {
            int *tmp = new int[arr_size];
            int idx = 0;
            for(int i =l;i<arr_size;i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            for(int i =0;i<=r;i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            swap(tmp,a);
            l = 0;
            r = arr_size-1;
            delete []tmp;
        }
    }
    void increaseSize()
    {
        removeCircular();
        int *tmp = new int[arr_size*2];
        for(int i=0;i<arr_size;i++)
            tmp[i] = a[i];
        swap(a,tmp);
        arr_size = arr_size*2;
        delete []tmp;
    }
    void enqueue(int value)
    {
        if(sz == arr_size)
        {
            increaseSize();
        }
        r++;
        if(r == arr_size)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }

    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty."<<endl;
            return;
        }
        l++;
        if(l == arr_size)
        {
            l = 0;
        }
        sz--;
    }

    int front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return sz;
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
