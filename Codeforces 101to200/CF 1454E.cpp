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
        int n;
        cin>>n;

        vector<vector<int>>g(n);

        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            x--;y--;
            g[x].push_back(y);
            g[y].push_back(x);
        }

        vector<int>val(n,1);
        queue<int>leafs;

        for(int i=0;i<n;i++)
        {
            if(g[i].size()==1)
            {
                leafs.push(i);
            }
        }
        while(!leafs.empty())
        {
            int v = leafs.front();
            leafs.pop();
            int pr = *g[v].begin();
            val[pr]+=val[v];
            val[v]=0;
            g[v].clear();
            vector<int>::iterator it;
            for(it=g[pr].begin();it!=g[pr].end();it++)
            {
                if((*it) == v)
                {
                    g[pr].erase(it);
                    break;
                }
            }
            if(g[pr].size()==1)
            {
                leafs.push(pr);
            }
        }

        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            ans+=val[i] *1LL* (val[i]-1)/2;
            ans+=val[i] *1LL* (n-val[i]);
        }
        cout<<ans<<endl;

    }
//  KeyPoint
//
//
//
    return 0;
}

