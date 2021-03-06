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


///input
#define input(a) scanf("%d",&a);
#define input2(a,b) scanf("%d %d",&a,&b);
#define input3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define inputll(a) scanf("%lld",&a);
#define inputll2(a,b) scanf("%lld %lld",&a,&b);
#define inputll3(a,b,c) inputll2(a,b) inputll(c)

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
        int cnt = 0;
        int n;
        cin>>n;
        int arr[n];

        int exists[2*n + 5];
        memset(exists, 0, sizeof exists);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            exists[arr[i]]++;
        }

//
//        for(int i=0; i<mxn; i++)
//        {
//            if(exists[i])
//            {
//                watch(i);
//            }
//        }


        for(int i=n-1; i>=0; i--)
        {
            if(exists[arr[i]])
            {
//                watch(arr[i]);
                if(exists[arr[i]+1]==0)
                {
                    exists[arr[i]+1]=1;
                    exists[arr[i]]--;

//                    for(int i=0; i<mxn; i++)
//                    {
//                        if(exists[i])
//                        {
//                            watch(i);
//                        }
//                    }
                }
            }
        }
//        cout<<"result : "<<endl;
        for(int i=0; i< 2*n + 5 ; i++)
        {
            if(exists[i])
            {
//                watch(i);
                cnt++;
            }
        }
        cout<<cnt<<endl;



    }
//  KeyPoint
//
//
//
    return 0;
}


