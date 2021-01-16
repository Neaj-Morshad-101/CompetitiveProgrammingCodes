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

int val(string s)
{
    if(s == "January") return 1;
    else if(s=="February") return 2;
    else if(s=="March") return 3;
    else if(s=="April") return 4;
    else if(s=="May") return 5;
    else if(s=="June") return 6;
    else if(s=="July") return 7;
    else if(s=="August") return 8;
    else if(s=="September") return 9;
    else if(s=="October") return 10;
    else if(s=="November") return 11;
    else return 12;
}

bool isLeapYear(int n)
{
    if(n%400==0 or (n%4==0 and n%100!=0)) return true;
    else return false;
}

int main()
{

    int t;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        string s1,s2;

        int d1,d2,y1,y2;
        cin>>s1;
        scanf(" %d%*c",&d1);
        input(y1);

        cin>>s2;
        scanf(" %d%*c",&d2);
        input(y2);


        int year,year2;

        if(val(s1)<3) year=y1;
        else year=y1+1;


        if(val(s2)> 2 or (val(s2)==2 and d2==29)) year2=y2;
        else year2=y2-1;
        int cnt=0;
        cnt = year2/4 - year2/100 + year2/400;
        year--;
        cnt-=(year/4 - year/100 + year/400);
        printf("Case %d: %d\n",tc,cnt);




    }




    return 0;
}
