#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const ll INF = 2000000000000000000LL;///2e18
const long double EPS = 1e-9;


#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"
#define watch2(x,y) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl
#define watch3(x,y,z) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl<<#z<<" = "<<z<<endl
#define pi acos(-1.0)
#define inpi(a) scanf("%d",&a);
#define inpi(a,b) scanf("%d %d",&a,&b);
#define inpi(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define inpli(a) scanf("%lld",&a);
#define inpli(a,b) scanf("%lld %lld",&a,&b);
#define inpli(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);
#define dtc(n) char(n+48)
#define ctd(ch) (ch-48)


//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    faster_io;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        bool alleven=true,allodd=true;
        int sum =0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]&1) alleven=false;
            else allodd=false;
        }
        if(sum&1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(alleven or allodd)
            {
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
    }




    return 0;
}

