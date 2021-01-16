#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,a,b;
        cin>>x>>y>>a>>b;
        if(a*2 > b)
        {
            long long ans=0, mn= min(x,y);
            x-=mn;
            y-=mn;
            ans+=b*mn;
            ///cout<<ans<<endl;


            ans+=x*a+y*a;
            cout<<ans<<endl;

        }
        else
        {
            cout<<(long long)(x+y)*a<<endl;
        }
    }
}
