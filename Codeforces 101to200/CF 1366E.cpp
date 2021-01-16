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
const ll mod = 998244353;

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
    // cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        ll ans = 1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        int index = n-1;
        bool out =false;
        for(int bi=m-1; bi>0; bi--)
        {
            int cnt =0;
            bool found =false;

            while(a[index]>=b[bi])
            {
                if(a[index]==b[bi]) found=true;
                index--;
                if(found)
                    cnt++;
                if(index<0)
                {
                    out=true;
                    break;
                }
            }

            ans = ans*(cnt);
            ans = ans % mod;

            if(out) break;

        }

        if(index==-1)
        {
            ans =0;
            cout<<ans<<endl;
            continue;
        }
        bool ok=false;
        for(int i=index; i>=0; i--)
        {

            if(a[i]==b[0]) ok=true;
            if(a[i]>=b[0]) continue;
            else
            {
                ans=0;
                break;
            }



        }
        if(!ok) ans=0;

        cout<<ans<<endl;


    }

//    ///point
//    traverse form last to first
//    ans*=(current value index - small value index)
//    if(current value not found or array traverse not completed then ans = 0;


    return 0;
}

