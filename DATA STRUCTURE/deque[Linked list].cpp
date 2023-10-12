#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prv;
    node *nxt;
};

class Deque
{
public:
    node *head;
    node *tail;
    int sz;


    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node *createNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->prv = NULL;
        newNode->nxt = NULL;
        return newNode;
    }

    void push_front(int value)
    {
        node *newNode = createNewNode(value);
        if(sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        head->prv = newNode;
        newNode->nxt = head;
        head = newNode;
        sz++;
    }

    void push_back(int value)
    {
        node *newNode = createNewNode(value);
        if(sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        tail->nxt = newNode;
        newNode->prv = tail;
        tail = newNode;
        sz++;
    }

    void pop_front()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty."<<endl;
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
        head = head->nxt;
        head->prv = NULL;
        delete a;
        sz--;
    }

    void pop_back()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty."<<endl;
            return;
        }
        if(sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node *a = tail;
        tail = tail->prv;
        tail->nxt = NULL;
        delete a;
        sz--;
    }

    int front()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty."<<endl;
            return -1;
        }
        return head->data;
    }

    int back()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty."<<endl;
            return -1;
        }
        return tail->data;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    Deque dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);

    cout<<"Deque size "<<dq.size()<<endl;
    cout<<"Deque front "<<dq.front()<<endl;
    dq.pop_front();
    cout<<"Deque front "<<dq.front()<<endl;
    dq.pop_front();
    cout<<"Deque front "<<dq.front()<<endl;
    dq.pop_front();
    cout<<"Deque size "<<dq.size()<<endl;


    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    cout<<"Deque size "<<dq.size()<<endl;
    cout<<"Deque back "<<dq.back()<<endl;
    dq.pop_back();
    cout<<"Deque back "<<dq.back()<<endl;
    dq.pop_back();
    cout<<"Deque back "<<dq.back()<<endl;
    dq.pop_back();
    cout<<"Deque size "<<dq.size()<<endl;

    return 0;
}

