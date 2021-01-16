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
const ll mxn = 15000000;

///faster io
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///debug
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"
#define watch2(x,y) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl
#define watch3(x,y,z) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl<<#z<<" = "<<z<<endl



///program starts...........

bool vis[mxn+10];
int n;
int arr[300000 + 10];

int fre[mxn+10];


int main()
{
    faster_io;
    {
        cin>>n;
        int g = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            fre[arr[i]]++;
            g = __gcd(g, arr[i]);
        }
//        watch(g);
//        for(int i=0;i<n;i++) watch(fre[arr[i]]);

        int mx = 0;
        for(int i = g+1; i<=mxn; i++)
        {
            if(!vis[i])
            {
                int cnt = 0;
                for(int j=i; j<=mxn; j+=i)
                {
                    cnt+=fre[j];
                    vis[j]=true;
                }
                mx = max(mx, cnt);

            }

        }

        //watch(mx);

        if(mx) cout<<n-mx<<endl;
        else cout<<"-1"<<endl;



    }
//  points
//
//
//
    return 0;
}

