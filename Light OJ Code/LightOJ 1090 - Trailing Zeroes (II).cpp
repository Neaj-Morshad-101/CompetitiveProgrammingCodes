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
    input(t);
    for(int tc=1 ; tc<=t; tc++)
    {
        int n,r,p,q;
        input2(n,r);
        input2(p,q);

        int five=0,two=0;

        int temp = p ;
        while(temp%5==0)
        {
            temp/=5;
            five++;
        }
        temp = p;
        while(temp%2 == 0)
        {
            temp/=2;
            two++;
        }

        five*=q;
        two*=q;

        int newfive=0, newtwo=0;

        temp = n;
        int t5=5;

        while(temp/t5)
        {
            newfive+=temp/t5;
            t5*=5;
        }

        temp=n;
        int t2 = 2;
        while(temp/t2)
        {
            newtwo += temp/t2;
            t2*=2;
        }
        five+=newfive;
        two += newtwo;

        newtwo = 0, newfive = 0 ;

        temp = r;
        t5=5;

        while(temp/t5)
        {
            newfive+=temp/t5;
            t5*=5;
        }

        temp=r;
        t2 = 2;
        while(temp/t2)
        {
            newtwo += temp/t2;
            t2*=2;
        }

        five-=newfive;
        two -= newtwo;

        newfive=0;
        newtwo =0;

        temp = n-r ;
        t5=5;

        while(temp/t5)
        {
            newfive+=temp/t5;
            t5*=5;
        }

        temp=n-r;
        t2 = 2;
        while(temp/t2)
        {
            newtwo += temp/t2;
            t2*=2;
        }
        five-=newfive ;
        two -= newtwo;

        if(five<0) five=0;
        if(two<0) two=0;

        int zero = min(five,two);

        cout<<"Case "<<tc<<": "<<zero<<endl;





    }




    return 0;
}
