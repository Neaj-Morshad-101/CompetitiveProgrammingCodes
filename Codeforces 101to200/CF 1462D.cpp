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
#define watch2(x,y) cout<<#x<<" = "<<x<<" "<<#y<<" = "<<y <<endl
#define watch3(x,y,z) cout<<#x<<" = "<<x<<" "<<#y<<" = "<<y <<" "<<#z<<" = "<<z<<endl


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
        int arr[n];
        int sum=0;
        int mx = INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            mx = max(mx,arr[i]);
        }
        //watch2(mx,sum);
        int ans = INT_MAX;
        for(int i = mx; i<=sum; i++)
        {
            if(sum%i) continue;
            //watch(i);

            int presum = arr[0];
            int cnt = 0;
            bool ok=true;
            for(int j=1; j<n; j++)
            {
                if(presum==i)
                {
                    presum = arr[j];
                }
                else
                {
                    presum+=arr[j];
                    cnt++;
                    if(presum>i)
                    {
                        ok=false;
                        //cout<<"break line : "<<__LINE__<<endl;
                        break;
                    }

                }
            }
            if(ok and (presum == 0 or presum == i))
            {
                ans = min(ans,cnt);
            }

        }
        cout<<ans<<endl;

    }
//  KeyPoint
//
//
//
    return 0;
}
