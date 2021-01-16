#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 17
ll BigMod(ll x,ll n)
{
    if(n==0) return 1;
    ll y=BigMod(x,n/2);
    if(n&1)
        return (x*y*y)%mod;
    return (y*y)%mod;
}

int main()
{
    ll x,n;
    cin>>x>>n;
    cout<<BigMod(x,n)<<endl;
    return 0;
}

