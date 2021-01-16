#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    deque<int>s,ss;
    while(a and b)
    {
        s.push_back(0);
        s.push_back(1);
        a--;
        b--;
    }
    while(c and d)
    {
        ss.push_back(2);
        ss.push_back(3);
        c--;
        d--;
    }
    while(b and c)
    {
        s.push_back(2);
        s.push_back(1);
        b--;
        c--;
    }
    if(a)
    {
        s.push_back(0);
        a--;
    }

    if(b)
    {
        s.push_front(1);
        b--;
    }
    if(c)
    {
        ss.push_back(2);
        c--;
    }
    if(d)
    {
        ss.push_front(3);
        d--;
    }
    for(int value:ss)
    {
        s.push_back(value);
    }
    bool yes = true;
    int sz = s.size();
    for(int i=0; i<sz-1; i++)
    {
        if(abs(s[i+1]-s[i])!=1)
        {
            yes = false;
            break;
        }
    }
    if(a||b||c||d)
        yes = false;
    if(yes)
    {
        cout<<"YES"<<endl;
        for(int value : s)
        {
            cout<<value<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;





}






























