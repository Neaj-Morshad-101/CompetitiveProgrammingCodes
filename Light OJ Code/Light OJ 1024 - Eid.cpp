#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
    ll t;
    cin>>t;
    ll n,gc,lc;
    for(ll tc=1;tc<=t;tc++)
    {
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        gc=__gcd(a[0],a[1]);
        lc=(a[0]*a[1])/gc;
        for(ll i=2;i<n;i++)
        {
            gc=__gcd(lc,a[i]);
            lc=(lc*a[i])/gc;
        }
        printf("Case %lld: %lld\n",tc,lc);
    }
}
