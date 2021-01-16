#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000003
const int Size = 1e6;
ll arr[Size+5];
ll BigMod(ll x,ll n)
{
    if(n==0) return 1;
    ll y=BigMod(x,n/2);
    if(n&1)
        return (x*y*y)%mod;
    return (y*y)%mod;
}
ll ModInverse(ll n)
{
    return BigMod(n,mod-2)%mod;
}
void fac_calc()
{
    arr[0]=1;
    for(int i=1;i<=Size+1;i++)
    {
        arr[i]=(arr[i-1]*i)%mod;
    }
}

int main()
{
    int t,n,k;
    scanf("%d",&t);
    fac_calc();
    for(int tc=1;tc<=t;tc++)
    {
        scanf("%d %d",&n,&k);
        int ans = (arr[n]*ModInverse(arr[k])*ModInverse(arr[n-k]))%mod;
        printf("Case %d: %d\n",tc,ans);
    }
    return 0;
}
