#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;


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
#define itc(n) char(n+48)
#define cti(ch) (ch-48)


//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ll n;

ll Count(ll x)
{
    ll lo,hi,cnt=0;
    if(x&1)
        lo=hi=x;
    else
        lo=x,hi=min(x+1,n);
    while(lo<=n)
    {
        cnt+=hi-lo+1;
        lo=lo*2;
        hi=hi*2+1;
        hi=min(hi,n);
    }
    return cnt;
}

int main()
{
    faster_io;

    ll k;
    cin>>n>>k;
    ll lo,hi,mid,odd_ans=1,even_ans=1;


    /// binary search for odd number's count value
    {
        lo=1,hi;
        if(n&1)
            hi=n;
        else
            hi=n-1;
        while(lo<=hi)
        {
            ll mid=lo+(hi-lo)/2;
            if(mid%2==0)
                mid--;
            if(Count(mid)>=k)
            {
                odd_ans=mid;
                lo=mid+2;
            }
            else
                hi=mid-2;
        }
    }

    ///binary search for even number's count value
    {
        lo=2;
        if(n&1)
            hi=n-1;
        else
            hi=n;
        while(lo<=hi)
        {
            ll mid =lo+(hi-lo)/2;
            if(mid&1)
                mid--;
            if(Count(mid)>=k)
            {
                even_ans=mid;
                lo=mid+2;
            }
            else
                hi=mid-2;
        }
    }

    cout<<max(even_ans,odd_ans)<<endl;


    return 0;
}
