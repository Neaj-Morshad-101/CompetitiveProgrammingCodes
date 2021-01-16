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

///File shortcut
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


///program starts...........




void solve(int tc)
{
    ll w,h,n;
    cin>>w>>h>>n;

    ll cnt = 0;

    int p1=0, p2=0;
    while(w%2==0)
    {
        p1++;
        w/=2;
    }

    while(h%2==0)
    {
        p2++;
        h/=2;
    }

    cnt = pow(2,p1) * pow(2, p2);

    if(cnt>=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return;
}

int main()
{
    faster_io;

    int t=1;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        solve(tc);
    }
///  KeyPoint
///
///
///
///
///
    return 0;
}

