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

    int t;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        int n;
        cin>>n;
        string s[n],ss[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i]>>ss[i];
        }
        bool ok=true;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1; j<n;j++)
            {
                if(s[i]==ss[j] and ss[i]==s[j])
                {
                    ok=false;
                    break;
                }
            }
        }
        if(ok)
        {
            cout<<"Case "<<tc<<": Yes"<<endl;
        }
        else cout<<"Case "<<tc<<": No"<<endl;

    }




    return 0;
}
