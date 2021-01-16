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

int n, m, k;
ll dif[mxn]={0};
ll dif_query[mxn]={0};


void solve(int tc)
{
    cin>>n>>m>>k;
    vector<pair<pii, int>>pairs;
    memset(dif, 0 , sizeof dif);
    memset(dif_query, 0 , sizeof dif_query);

    int arr[n+1]={0};
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        dif[i]=arr[i]-arr[i-1];
    }

    cout<<"Dif Array: "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<dif[i]<<" ";
    }
    cout<<endl;






    int l,r,v;

    for(int i=0; i<m; i++)
    {
        cin>>l>>r>>v;
        pairs[i].first.first=l;
        pairs[i].first.second=r;
        pairs[i].second = v;
    }

    for(int i=0; i<m; i++)
    {
        cout<<pairs[i].first.first<<" ";
        cout<<pairs[i].first.second<<" ";
        cout<<pairs[i].second<<endl;
    }

    for(int i=1; i<=k; i++)
    {
        cin>>l>>r;
        dif_query[l]++;
        dif_query[r+1]--;
    }

    for(int i=1; i<=m; i++)
    {
        dif_query[i]+=dif_query[i-1];
    }

    for(int i=1;i<=m;i++)
    {
        l = pairs[i-1].first.first;
        r = pairs[i-1].first.second;
        v = pairs[i-1].second;

        dif[l]+=(v * 1ll * dif_query[i]);
        dif[r+1]-=(v * 1ll * dif_query[i]);
    }

    for(int i=1;i<=n;i++)
    {
        dif[i]+=dif[i-1];
    }

    for(int i=1;i<=n;i++) cout<<dif[i]<<" ";
    cout<<endl;

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
///
///
///
///
    return 0;
}


