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
    faster_io;

    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<n; i++)
        cin>>b[i];
    ll total=n*(n-1)/2,negcnt=0,dif[n],cnt0=0;
    for(ll i=0; i<n; i++)
        dif[i]=a[i]-b[i];


//    for(int i=0;i<n;i++)
//    {
//        cout<<dif[i]<<" ";
//
//    }
//    cout<<endl;

    vector<int>neg,pos;
    vector<int>::iterator it,it2;
    for(ll i=0; i<n; i++)
    {
        if(dif[i]<0)
        {
            negcnt++;
            neg.push_back(dif[i]);
        }
        else if(dif[i]==0)
            cnt0++;
        else
            pos.push_back(dif[i]);
    }
    ll hobena_cnt=(negcnt+cnt0)*(negcnt+cnt0-1)/2;
    ll cnt=n-negcnt,hobe_cnt=0;
    if(cnt==cnt0)
        hobe_cnt=0;
    else
        hobe_cnt=(cnt)*(cnt-1)/2;


//    cout<<hobena_cnt<<endl;
//    cout<<hobe_cnt<<endl;
//    cout<<total-cnt<<endl;

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

//    for(it=pos.begin();it!=pos.end();it++)
//    {
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//
//    for(it=neg.begin();it!=neg.end();it++)
//    {
//        cout<<*it<<" ";
//    }
//    cout<<endl;

    ll noCnt=0;
    for(it=pos.begin(); it!=pos.end(); it++)
    {
        for(it2=neg.begin(); it2!=neg.end(); it2++)
        {
//            if((*it)+(*it2)>0)
//            {
//                goto level;
//            }
//            else
//                noCnt++;
              if((*it)+(*it2)<=0) noCnt++;
        }
    }
level:
    ll ans=(pos.size()*neg.size())-noCnt;
    ans+=hobe_cnt;
    cout<<ans<<endl;






        return 0;
}
//44 20 37 3 22 27 31 11 15 17
//7 7 3 29 3 13 57 4 29 38

///24
