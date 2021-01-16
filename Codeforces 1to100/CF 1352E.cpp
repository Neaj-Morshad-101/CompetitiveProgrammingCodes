
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

map<int,bool>mp;

int main()
{
    faster_io;

    int t;
    cin>>t;
    while(t--)
    {
        short int n;
        cin>>n;
        short int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];



        int csum[n];
        csum[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            csum[i]=csum[i-1] + arr[i];
        }
        int sum;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i==0) sum=csum[j];
                else sum=csum[j]-csum[i-1];
                mp[sum]=true;
            }
        }

        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]) cnt++;
        }

        cout<<cnt<<endl;
        mp.clear();
    }




    return 0;
}

