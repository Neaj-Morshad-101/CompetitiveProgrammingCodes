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
#define inpi(a) scanf("%d",&a);
#define inpi2(a,b) scanf("%d %d",&a,&b);
#define inpi3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define inpli(a) scanf("%lld",&a);
#define inpli2(a,b) scanf("%lld %lld",&a,&b);
#define inpli3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);


///File shortcut
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


///program starts...........





int main()
{
    faster_io;

    int t;
    cin>>t;
    while(t--)
    {


        int n,k;
        cin>>n>>k;

        if(k > n)
        {
            cout<<"NO"<<endl;
            continue;
        }

        if(n&1)
        {
            if(k&1)
            {
                cout<<"YES"<<endl;
                while(k--)
                {
                    if(k)
                    {
                        cout<<"1 ";
                        n--;

                    }
                    else cout<<n<<endl;
                }
            }
            else cout<<"NO"<<endl;
            /// if n even and n/2>=k then sol exist and solution is 2 2 2 2 ... last
        ///               n/2< k then trying odd .. then if n>=k and k is even  1 1 1 1 1 last
        /// if n is odd then n>=k and k is odd ans is 1 1  1 1 1 last
        }
        else
        {
            if(n/2 >= k)
            {
                cout<<"YES"<<endl;
                while(k--)
                {
                    if(k)
                    {
                        cout<<"2 ";
                        n-=2;
                    }
                    else cout<<n<<endl;

                }
            }
            else if(k&1) cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                while(k--)
                {
                    if(k)
                    {
                        cout<<"1 ";
                        n--;
                    }
                    else cout<<n<<endl;
                }
            }
        }
    }




    return 0;
}


