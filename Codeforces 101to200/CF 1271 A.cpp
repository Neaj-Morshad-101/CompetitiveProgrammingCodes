#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;


#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define watch(x) cout<<#x<<" = "<<x<<endl
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
int main()
{
    faster_io;

    ll t,s,v,j,a,b,ans=0,mn;
    cin>>t>>s>>v>>j>>a>>b;
    if(a>b)
    {
        mn = min(t,j);
        ans+=(mn*a);
        t-=mn;
        j-=mn;
        ans+=min(min(s,v),j)*b;
    }
    else
    {
        mn=min(min(s,v),j);
        ans+=mn*b;
        j-=mn;
        ans+=min(j,t)*a;
    }

    cout<<ans<<endl;




    return 0;
}

