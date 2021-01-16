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
        int n,k;
        cin>>n>>k;
        char str[n+2];
        int sz = n+2;
        str[0]='1';
        str[n+1]='1';
        for(int i=1; i<=n; i++)
            cin>>str[i];

        int prev = -1;
        int next = 0,dif,ans = 0,i;
        k++;
        for( i=1; i<=n; i++)
        {
            if(str[i]=='0')
            {
                next++;
            }
            else
            {
                if(prev == -1)
                {
                    dif = next  + 1;
                    if(dif%k ==0)
                    {
                        dif = dif/k;
                    }
                    else
                    {
                        dif = dif/k + 1;
                    }

                    dif-=1;
                    if(dif<0)
                        dif=0;
                    ans+=dif;
                    //watch(dif);


                    prev = i;
                    next = 0;
                }
                else
                {
                    dif = next + 2;

                    if(dif%k==0)
                    {
                        dif = dif/k;
                        //watch(dif);
                    }
                    else
                    {
                        dif = dif/k+1;
                        //watch(dif);
                    }
                    //watch(dif);
                    dif-=2;
                    if(dif<0)
                        dif=0;

                    ans += dif;
                    prev = i;
                    next = 0;
                   // cout<<ans<<endl;

                }

            }
        }
        if(prev!= -1)
        {
            dif = next  + 1;
            if(dif%k ==0)
            {
                dif = dif/k;
            }
            else
            {
                dif = dif/k + 1;
            }

            dif-=1;
            if(dif<0)
                dif=0;
            ans+=dif;
            //watch(dif);


        }
        else
        {
            dif = next;
            if(dif%k==0)
            {
                dif = dif/k;
            }
            else dif = dif/k + 1;

            ans+=dif;
        }


        ///last portion
        cout<<ans<<endl;

    }
    return 0;
}

