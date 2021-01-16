
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

///File shortcut
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


///program starts...........




void solve_case(int tc)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    bool vis[n+10]={false};
    int mx =0;
    int cnt =0;
    for(int i=1; i<n-1; i++)
    {
        if(arr[i-1] > arr[i] and arr[i] < arr[i+1])
        {
            cnt++;
            vis[i]=true;
        }
        else if(arr[i-1] < arr[i] and arr[i+1]< arr[i])
        {
            cnt++;
            vis[i]=true;
        }
        //watch2(i,vis[i]);
    }
    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=i; j<=i+2; j++)
        {
            if(vis[j]) temp++;
        }

        mx = max(temp,mx);
    }

    //watch2(cnt,mx);

    cout<<max(cnt-mx,0)<<endl;




    return;
}

int main()
{
    faster_io;

    int test_case=1;
    cin>>test_case;
    for(int tc=1 ; tc<=test_case; tc++)
    {
        solve_case(tc);
    }
///  KeyPoint
///
///
///
///
///
    return 0;
}

