#include<bits/stdc++.h>
using namespace std;


///typedef
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

///define constant
const ll INF = 2000000000000000000LL;///2e18
const ld EPS = 1e-9;
const ld pi  = acos(-1.0);
const ll mxn = 200005;
const int mod = 1000000007;//1e9+7;

///faster io
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///debug
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"
#define watch2(x,y) cout<<#x<<" = "<<x<<" "<<#y<<" = "<<y <<endl
#define watch3(x,y,z) cout<<#x<<" = "<<x<<" "<<#y<<" = "<<y <<" "<<#z<<" = "<<z<<endl


///input
#define input(a) scanf("%d",&a);
#define input2(a,b) scanf("%d %d",&a,&b);
#define input3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define inputll(a) scanf("%lld",&a);
#define inputll2(a,b) scanf("%lld %lld",&a,&b);
#define inputll3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);


///File shortcut
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


///program starts...........

ll fac[mxn];

void calc_fac()
{
    fac[0]=1;
    for(ll i=1; i<mxn; i++)
    {
        fac[i]= (i * fac[i-1]) % mod;
    }
}

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

ll nCr(ll n, ll r)
{
    return ((fac[n] * (ModInverse(fac[r]) % mod) % mod) * (ModInverse(fac[n-r]) % mod)) % mod;

}

int main()
{
    faster_io;

    calc_fac();

    int t=1;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int arr[2*n+101]={0};
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr[x]++;
        }

        ll ans=0;

        for(int i=1; i<=n; i++)
        {
            ll s = arr[i];
            ll o = 0;
            for(int j=i+1; j <= i+k; j++)
            {
                o += arr[j];
            }

            for(int c = 1; c<=m; c++)
            {
                ans += (nCr(s, c) * nCr(o, m-c)) % mod;
                ans%=mod;
            }

        }

        cout<<ans<<endl;

    }
//  KeyPoint
//
//
//
    return 0;
}


