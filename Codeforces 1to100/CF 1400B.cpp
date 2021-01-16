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

long long  cap1,cap2;
long long s_no, a_no;
long long s_weight, a_weight;

bool isPos(long long num)
{
    long long nibo = min(s_no,num);
    for(long long n=0; n<=nibo; n++)
    {
        long long c1=cap1,c2=cap2;

        c1-=n*s_weight;
        c2-=(nibo - n)*s_weight;

       // watch2(c1,c2);

        if(c1<0 or c2<0)
            continue;
        if(nibo+c1/a_weight+c2/a_weight >=num)
        {
            //watch(n);
            return true;
        }

    }
    return false;
}



int main()
{
    faster_io;

    long long t;
    cin>>t;


    for(long long tc=1 ; tc<=t; tc++)
    {


        cin>>cap1>>cap2;
        cin>>s_no>>a_no;
        cin>>s_weight>>a_weight;

        if(a_weight<s_weight)
        {
            swap(a_weight,s_weight);
            swap(a_no, s_no);
        }
        if(cap1>cap2)
            swap(cap1,cap2);

//        watch2(cap1,cap2);
//        watch2(s_no,a_no);
//        watch2(s_weight, a_weight);
        long long a=0,b=s_no+a_no;
        long long mx = 0;
        while(a<=b)
        {
            long long mid = a + (b-a)/2;
            //watch(mid);
            if(isPos(mid))
            {
                mx = max(mx,mid);
               // cout<<"1"<<endl;
                a = mid+1;

            }
            else
            {
                //cout<<"0"<<endl;
                b=mid -1;
            }
        }

        cout<<mx<<endl;

    }


    return 0;
}


