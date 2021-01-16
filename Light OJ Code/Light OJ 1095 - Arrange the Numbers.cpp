#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define watch(x) cout<<#x<<" = "<<x<<endl
#define watch(x,y,z) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl<<#z<<" = "<<z<<endl

//#define Size 1000000
const int mod = 1e9+7;
ll factarr[1005];
//ll modinverse[Size];

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

void calc()
{
    factarr[0]=1;
    for(int i=1;i<=1000;i++)
    {
        factarr[i]=(i*factarr[i-1])%mod;
    }
//    for(int i=0;i<=Size;i++)
//    {
//        modinverse[i]=ModInverse(i);
//    }
}


int main()
{
    calc();
    int t,n,m,k;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        scanf("%d %d %d",&n,&m,&k);
        //watch(n,m,k);
        ll nCr = factarr[m]*ModInverse(factarr[k])*ModInverse(factarr[m-k]);
        cout<<nCr<<endl;
        ll ans =  (nCr%mod) * (( factarr[n-k] - factarr[n-m] + mod + 1000 )%mod);
        ans %= mod;
        printf("Case %d: %lld\n",tc,ans);
    }
    return 0;
}
