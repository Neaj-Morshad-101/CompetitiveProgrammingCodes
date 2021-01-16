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
const ll mx = 100005;

///faster io
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///debug
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"
#define watch2(x,y) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl
#define watch3(x,y,z) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl<<#z<<" = "<<z<<endl


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





int main()
{
    faster_io;

    int t=1;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        int n,c,cc,h;
        cin>>n>>c>>cc>>h;
        string s;
        cin>>s;
        int cnt0=0,cnt1=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }
        int mn = min(c,cc);
        int mx = max(c,cc);
        if(h<mx-mn)
        {
            if(mx==c)
            {
                cnt1+=cnt0;
                cout<<(cnt0*h + cnt1*cc)<<endl;
            }
            else
            {
                cnt0+=cnt1;
                cout<<(cnt0*c + cnt1*h)<<endl;
            }
        }
        else
        cout<<(cnt0*c + cnt1*cc)<<endl;

    }
//  points
//
//
//
    return 0;
}

