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
    int n, x;

    ll mx=0, mn=0;
    cin>>n>>x;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    ll r = 0;

    for(int i=0; i<n; i++)
    {
        mx += arr[i]/x;
        if(arr[i]%x)
        {
            mx++;
        }

        r = (r + arr[i]);
        mn += r/x;
        r = r%x;
    }

    cout<<mn<<" "<<mx<<endl;




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

