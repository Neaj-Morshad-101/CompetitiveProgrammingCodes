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
    freopen("outputlj.txt","w",stdout);
    faster_io;
    int t,caseno=0;
    cin>>t;
    while(t--)
    {
        int n,r,p,q;
        cin>>n>>r>>p>>q;
        int cnt_zero1=0,cnt_zero2=0,cnt_zero3=0,cnt_zero4=0;
        int temp=n;
        int cnt5=0,cnt2=0;
        int pow5=5;
        while(temp/pow5)
        {
            cnt5+=(temp/pow5);
            pow5*=5;
        }
        int pow2=2;
        temp=n;
        while(temp/pow2)
        {
            cnt2+=(temp/pow2);
            pow2*=2;
        }
        cnt_zero1=min(cnt2,cnt5);
        temp=r;
         pow5=5;
         cnt5=0;
        while(temp/pow5)
        {
            cnt5+=(temp/pow5);
            pow5*=5;
        }
        temp=r;
        pow2=2;
        cnt2=0;
        while(temp/pow2)
        {
            cnt2+=(temp/pow2);
            pow2*=2;
        }
        cnt_zero2=min(cnt2,cnt5);
        temp=n-r;
         pow5=5;
         cnt5=0;
        while(temp/pow5)
        {
            cnt5+=(temp/pow5);
            pow5*=5;
        }
        temp=n-r;
        pow2=2;
        cnt2=0;
        while(temp/pow2)
        {
            cnt2+=(temp/pow2);
            pow2*=2;
        }
        cnt_zero3=min(cnt2,cnt5);
        cnt5=0;
        temp=p;
        while(temp%5==0)
        {
            cnt5++;
            temp/=5;
        }
        cnt2=0;
        while(p%2==0)
        {
            cnt2++;
            p/=2;
        }
        cnt_zero4=min(cnt5*q , cnt2*q);
//        cout<<cnt_zero1<<endl;
//        cout<<cnt_zero2<<endl;
//        cout<<cnt_zero3<<endl;
//        cout<<cnt_zero4<<endl;
        int ans = cnt_zero1-cnt_zero2-cnt_zero3+cnt_zero4;
        cout<<"Case "<<(++caseno)<<": "<<ans<<endl;
    }




    return 0;
}

