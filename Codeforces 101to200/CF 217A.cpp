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
#define inputll3(a,b,c) inputll2(a,b) inputll(c)

///File shortcut
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


///program starts...........

map< pair<int,int>, bool>mp;
int n;
vector<pair<int,int>>v;

void dfs(pair<int,int>&p)
{
    mp[p]=true;

    for(auto it = v.begin(); it!=v.end(); it++)
    {
        pair<int,int>pr=(*it);
        if(mp[pr]) continue;
        if(pr.first==p.first or pr.second == p.second)
        {
            dfs(pr);
        }
    }
}
int main()
{
    faster_io;

    cin>>n;
    int x, y;

    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(mp[v[i]]==false)
        {
            cnt++;
            dfs(v[i]);
        }
    }

    cout<<cnt-1<<endl;
//  KeyPoint
//
//
//
    return 0;
}

