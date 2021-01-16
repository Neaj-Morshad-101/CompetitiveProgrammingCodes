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
        ll x;
        cin>>x;
        ll jumps = 0;
        ll total = 0;
        for(int i=1; ;i++)
        {
            total+=i;
            jumps++;
            if(total<x)
            {
                continue;
            }
            else
            {
                ll dif = total - x;
                if(dif==1)
                {
                    cout<<jumps+1<<endl;
                    break;
                }
                ll maxMinus = ((jumps+1)*(jumps+2)/2) - 1;
                if(dif == maxMinus-1)
                {
                    continue;
                }
                else
                {
                    cout<<jumps<<endl;
                    break;
                }
            }
        }
    }
//  points
//  jump untill distance reaches >= x and increment ans
//  if dif 1 then ans + 1
//  if dif < = n+1 ( n+2) / 2 but not less then one then print ans
//  else increase
    return 0;
}


