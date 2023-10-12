#include<bits/stdc++.h>
using namespace std;

vector<int>quick_sort(vector<int>a)
{
    //base case ....
    if(a.size()<=1)
    {
        return a;
    }
//  int pivot = a.size()-1;
    int pivot = rand()%(a.size());
    vector<int>b;
    vector<int>c;
    for(int i=0;i<a.size();i++)
    {
        if(i == pivot)
        {
            continue;
        }
        else if(a[i]<=a[pivot])
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }

    vector<int>sorted_b = quick_sort(b);
    vector<int>sorted_c = quick_sort(c);
    vector<int>sorted_a;

    for(int i=0;i<sorted_b.size();i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }

    sorted_a.push_back(a[pivot]);

    for(int i=0;i<sorted_c.size();i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }

    return sorted_a;
}

int main()
{
    cout<<"enter elements = ";
    int n;cin>>n;
    vector<int>p;
    for(int i=0;i<n;i++)
    {
        int m;cin>>m;
        p.push_back(m);
    }
    vector<int>ans = quick_sort(p);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
