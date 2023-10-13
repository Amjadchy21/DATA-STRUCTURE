#include<bits/stdc++.h>
using namespace std;

void print_list(list<int>& ll)
{
    list<int>::iterator it;
    for(it = ll.begin();it != ll.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);

    ll.push_front(2);
    ll.push_front(4);
    ll.push_front(6);

    print_list(ll);

    cout<<"FRONT = "<<ll.front()<<endl;
    cout<<"BACK = "<<ll.back()<<endl;

    ll.pop_front();
    cout<<"After pop_front = ";
    print_list(ll);

    ll.pop_back();
    cout<<"After pop back = ";
    print_list(ll);

    cout<<"SIZE = "<<ll.size()<<endl;

//    ll.clear();
//    print_list(ll);

    cout<<boolalpha<<ll.empty()<<endl;
    cout<<"INSERT = ";
    list<int>::iterator it;
    it = ll.begin();
    advance(it,3);
    ll.insert(it,50);
    print_list(ll);

    return 0;
}


