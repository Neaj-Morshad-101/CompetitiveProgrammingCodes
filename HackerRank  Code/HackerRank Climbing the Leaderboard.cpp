#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,xx;
    cin>>n;
    cin>>x;
    vector<int>v;
    v.push_back(x);
    n--;
    while(n--)
    {
        cin>>xx;
        if(xx!=x)
        {
            x=xx;
            v.push_back(x);
        }
    }
    reverse(v.begin(),v.end());
    int len = v.size();
    int m;
    cin>>m;
    while(m--)
    {
        cin>>x;
        auto it = lower_bound(v.begin(),v.end(),x);
        int pos = len-(it-v.begin());
        if(x!=*it)
        {
            pos++;
        }
        cout<<pos<<endl;
    }


    return 0;
}
