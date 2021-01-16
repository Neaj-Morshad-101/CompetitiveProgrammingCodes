#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10
ll BigMod(ll x)
{
    return x%mod;
}
ll BigMod(ll x,ll n)
{
    if(n==0) return 1;
    ll y=BigMod(x,n/2);
    ll ans = (y * y) % mod;
    if(n&1)
        ans =  (x*ans)%mod;
    return ans;
}
ll ModInverse(ll n)
{
    return BigMod(n,mod-2)%mod;
}
int main()
{
    ll x,n;
    cin>>x;
    cout<<BigMod(x)<<endl;
    cout<<ModInverse(x)<<endl;
    return 0;
}

