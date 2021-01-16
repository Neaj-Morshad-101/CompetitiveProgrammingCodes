#include<bits/stdc++.h>
using namespace std;


///typedef
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef pair<ll, ll> pll;

///define constant
const ll INF = 2000000000000000000LL;///2e18
const ld EPS = 1e-9;
const ld pi  = acos(-1.0);
const ll mx = 200009;
const ll mod = (ll)1e9+7;

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



ll fact[mx];

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

void calc()
{
    fact[0]=fact[1]=1;
    for(ll i=2; i<mx; i++)
    {
        fact[i]=i*fact[i-1];
            fact[i]%=mod;
    }
}

ll func(ll n, ll r)
{
    ll temp = ((fact[n-r])%mod * (fact[r])%mod) % mod;

    ll ans = (fact[n] %mod  * ModInverse(temp) % mod) % mod;

    return ans;
}




signed main()
{
    faster_io;
    calc();
    ll t=1;
    cin>>t;
    for(ll tc=1 ; tc<=t; tc++)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>vec;

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            vec.push_back(x);
        }
        ll ans=0;


        sort(vec.begin(), vec.end());

        for(ll i=0; i<n; i++)
        {
            auto it = upper_bound(vec.begin(), vec.end(), vec[i]+k)-vec.begin();
            it--;
            ll ache = (it-i);
            if(ache<m-1) continue;
            ans+=func(ache,m-1);
            ans%=mod;
        }



        cout<<ans<<endl;

    }
//  KeyPolls
//
//
//
    return 0;
}

