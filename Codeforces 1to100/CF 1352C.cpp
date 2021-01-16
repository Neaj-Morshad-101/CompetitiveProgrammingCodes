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

///faster io
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///debug
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"
#define watch2(x,y) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl
#define watch3(x,y,z) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl<<#z<<" = "<<z<<endl


///input
#define inpi(a) scanf("%d",&a);
#define inpi2(a,b) scanf("%d %d",&a,&b);
#define inpi3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define inpli(a) scanf("%lld",&a);
#define inpli2(a,b) scanf("%lld %lld",&a,&b);
#define inpli3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);


///File shortcut
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


///program starts...........





int main()
{
    faster_io;

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,hi=INT_MAX,lo=1;
        cin>>n>>k;
        while(true)
        {
            int mid = lo + (hi-lo)/2;
            int div = mid/n;
            if(mid-div==k)
            {
                if(mid%n==0)
                {
                    --mid;

                }
                cout<<mid<<endl;
                break;
            }
            else if(mid - div > k)
            {
                hi = mid-1;
            }
            else lo=mid+1;
        }
    }




    return 0;
}

