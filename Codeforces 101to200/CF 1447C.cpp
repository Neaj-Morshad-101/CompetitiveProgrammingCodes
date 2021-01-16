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
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        int n;
        ll w,sum;
        cin>>n>>w;
        pair<int,int> arr[n];
        int index = -1;

        ll halfw =ceil((double)w/2.0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
            arr[i].second=i;
            if(halfw<= arr[i].first and arr[i].first<=w)
            {
                index = i;
            }
        }
        if(index!=-1)
        {
            cout<<"1"<<endl;
            cout<<index+1<<endl;
            continue;
        }
        sort(arr,arr+n);

        ll csum[n];
        csum[0]=arr[0].first;
        for(int i=1;i<n;i++) csum[i]=csum[i-1]+arr[i].first;
        if(csum[0]>w) {
            cout<<"-1"<<endl;
            continue;
        }
        bool ans = false;
        sum=csum[0];
        if(sum>=halfw)
        {
            cout<<"1"<<endl;
            cout<<arr[0].second<<endl;
        }
        for(int i=1;i<n;i++)
        {
            if(csum[i]>w)
            {
                break;
            }
            sum+=csum[i];
             //watch(sum);
            if(csum[i]>=halfw)
            {
                ans=true;
                index=i;
            }

        }
        if(ans)
        {
            cout<<index+1<<endl;
            for(int i=0;i<=index;i++)
            {
                cout<<arr[i].second + 1<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }


    }
//  points
//
//
//
    return 0;
}

