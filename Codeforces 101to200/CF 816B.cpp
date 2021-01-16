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
const ll mxn = 200010;
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

int n,k,q;
ll dif[mxn];


void solve(int tc)
{
    cin>>n>>k>>q;

    int l,r;

    for(int i=0; i<n; i++)
    {
        cin>>l>>r;
        dif[l]++;
        dif[r+1]--;
    }

    for(int i=1; i<mxn; i++)
        dif[i]+=dif[i-1];

    for(int i=0; i<mxn; i++)
    {
        if(dif[i]>=k) dif[i]=1;
        else dif[i]=0;

    }

    for(int i=1; i<mxn; i++)
    {
        dif[i]+=dif[i-1];

    }

    int a,b;
    while(q--){
        cin>>a>>b;
        cout<<dif[b]-dif[a-1]<<endl;
    }

    return;
}

int main()
{
    faster_io;

    int t=1;
    //cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        solve(tc);
    }
///  KeyPoint
///  technique used->
///  dif array
///  prefix sum
///
///
///
    return 0;
}

