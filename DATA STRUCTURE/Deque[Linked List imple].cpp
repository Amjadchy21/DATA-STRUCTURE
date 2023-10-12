#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prv;
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
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
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
        newNode->prv = tail;
        tail->nxt = newNode;
        tail = newNode;
        sz++;
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
    void pop_back()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty"<<endl;
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
        sz--;
        delete a;
    }
    void pop_front()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty"<<endl;
            return;
        }
        if(sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        node *a = head;
        head = head->nxt;
        head->prv = NULL;
        sz--;
        delete a;
    }
    int front()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty"<<endl;
            return -1;
        }
        return head->data;
    }
    int back()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty"<<endl;
            return -1;
        }
        return tail->data;
    }
    void traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<endl;
    }

};

int main()
{
    Deque dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.traverse();

    dq.push_front(9);
    dq.push_front(8);
    dq.push_front(7);
    dq.traverse();

    dq.pop_back();
    dq.pop_back();
    dq.traverse();

    dq.pop_front();
    dq.pop_front();
    dq.traverse();
    cout<<"Back "<<dq.back()<<endl;
    cout<<"Front "<<dq.front()<<endl;

    dq.pop_back();
    dq.pop_back();
    dq.pop_back();
    dq.pop_back();
    dq.traverse();

    return 0;
}
