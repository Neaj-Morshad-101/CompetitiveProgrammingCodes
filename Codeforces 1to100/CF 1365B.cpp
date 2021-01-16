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
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        bool moving=true;

        while(moving)
        {
            moving=false;
            for(int i =0 ; i<n-1 ;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[j]<a[i] and b[i]!=b[j])
                    {
                        swap(a[i],a[j]);
                        //swap(b[i],b[j]);
                        moving=true;
                    }
                }
            }
        }

        int arr[n];

        for(int i=0;i<n;i++)
        {
            arr[i]=a[i];
        }

        sort(arr,arr+n);
        bool same =true;
        for(int i=0 ; i<n;i++)
        {
            if(a[i]!=arr[i])
            {
                same=false;
                break;
            }
        }
        if(same) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

//        for(int i=0;i<n;i++)
//        {
//            cout<<a[i]<<" ";
//        }
//        cout<<endl;
//
//         for(int i=0;i<n;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        cout<<endl;



    }




    return 0;
}

