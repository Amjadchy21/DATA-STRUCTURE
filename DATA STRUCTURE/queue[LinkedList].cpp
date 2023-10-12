#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
};

class Queue
{
public:
    node *head;
    node *tail;
    int sz;

    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node *createNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    void enqueue(int value)
    {
        sz++;
        node *newNode = createNewNode(value);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->nxt = newNode;
        tail = newNode;
    }

    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty."<<endl;
            return;
        }
        if(sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node *a = head;
        head = a->nxt;
        delete a;
        sz--;
    }

    int front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        return head->data;
    }

    int size()
    {
        return sz;
    }

};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout<<"Size "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<"Size "<<q.size()<<endl;

    return 0;
}
