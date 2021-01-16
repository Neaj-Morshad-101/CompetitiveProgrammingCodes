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
    int n;
    cin>>n;
    int  cnt1=0, cnt2=0, xx;
    for(int i=0;i<n;i++)
    {
        cin>>xx;
        if(xx&1) cnt1++;
        else cnt2++;
    }



    if(cnt1&1)
    {
        cout<<"NO"<<endl;
        return;
    }

    if(cnt2%2==0)
    {
        cout<<"YES"<<endl;
        return;
    }

    if(cnt1>=2 and cnt1 % 2==0)
    {
        cout<<"YES"<<endl;
    }
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

