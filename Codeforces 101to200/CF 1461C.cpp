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
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int last=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]!=i+1)
            {
                last=i+1;
                break;
            }
        }
        long double ans = 1.0000000;

        if(last==-1)
        {
            while(m--)
            {
                int r;
                long double p;
                cin>>r>>p;
            }


            cout<<ans<<endl;

            continue;
        }
        bool ok=false;
        while(m--)
        {
            int r;
            long double p;
            cin>>r>>p;
            if(r>=last)
            {
                ok=true;

                ans *=((long double)1.0 - p);
            }
        }

        if(!ok)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<((long double)1.0 - ans)<<endl;
        }

    }
//  KeyPoint
//
//
//
    return 0;
}

