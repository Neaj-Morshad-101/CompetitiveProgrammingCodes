#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
//const ll INF = 2000000000000000000LL;///2e18
//const long double EPS = 1e-9;
//
//
//#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"
//#define watch2(x,y) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl
//#define watch3(x,y,z) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl<<#z<<" = "<<z<<endl
//#define pi acos(-1.0)
//#define inpi(a) scanf("%d",&a);
//#define inpi(a,b) scanf("%d %d",&a,&b);
//#define inpi(a,b,c) scanf("%d %d %d",&a,&b,&c);
//#define inpli(a) scanf("%lld",&a);
//#define inpli(a,b) scanf("%lld %lld",&a,&b);
//#define inpli(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);
//#define dtc(n) char(n+48)
//#define ctd(ch) (ch-48)


//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    //faster_io;
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        map<pair<int,int>,int> mpi;
        char arr[n+2];
        scanf("%s",arr);
        int time=0;
        mpi[make_pair(0,0)]=-1;
        int x=0,y=0;
        int len=strlen(arr);
        int ansx=0,ansy=INT_MAX;
        int xx,yy;
        for(int i=0; i<len; i++)
        {
            if(arr[i]=='L')
            {
                x--;
                if(mpi[make_pair(x,y)])
                {
                    if(mpi[make_pair(x,y)]==-1)
                    {
                        xx=1,yy=++time;
//                        printf("1 %d\n",++time)
                        if(yy-xx<=ansy-ansx)
                        {
                            ansx=xx;
                            ansy=yy;
                        }
                    }
                    else
                    {
                        //printf("%d %d\n",mpi[make_pair(x,y)]+1)
                        xx=mpi[make_pair(x,y)]+1;
                        yy=++time;
                        if(yy-xx<=ansy-ansx)
                        {
                            ansx=xx;
                            ansy=yy;
                        }

                    }
                }
                else
                    mpi[make_pair(x,y)]=++time;
            }
            else if(arr[i]=='R')
            {
                x++;
                if(mpi[make_pair(x,y)])
                {
                    if(mpi[make_pair(x,y)]==-1)
                    {
                        xx=1,yy=++time;
//                        printf("1 %d\n",++time)
                        if(yy-xx<=ansy-ansx)
                        {
                            ansx=xx;
                            ansy=yy;
                        }
                    }
                    else
                    {
                        //printf("%d %d\n",mpi[make_pair(x,y)]+1)
                        xx=mpi[make_pair(x,y)]+1;
                        yy=++time;
                        if(yy-xx<=ansy-ansx)
                        {
                            ansx=xx;
                            ansy=yy;
                        }

                    }
                }
                else
                    mpi[make_pair(x,y)]=++time;
            }
            else if(arr[i]=='U')
            {
                y++;
                if(mpi[make_pair(x,y)])
                {
                    if(mpi[make_pair(x,y)]==-1)
                    {
                        xx=1,yy=++time;
//                        printf("1 %d\n",++time)
                        if(yy-xx<=ansy-ansx)
                        {
                            ansx=xx;
                            ansy=yy;
                        }
                    }
                    else
                    {
                        //printf("%d %d\n",mpi[make_pair(x,y)]+1)
                        xx=mpi[make_pair(x,y)]+1;
                        yy=++time;
                        if(yy-xx<=ansy-ansx)
                        {
                            ansx=xx;
                            ansy=yy;
                        }

                    }
                }
                else
                    mpi[make_pair(x,y)]=++time;
            }
            else
            {
                y--;
                if(mpi[make_pair(x,y)])
                {
                    if(mpi[make_pair(x,y)]==-1)
                    {
                        xx=1,yy=++time;
//                        printf("1 %d\n",++time)
                        if(yy-xx<=ansy-ansx)
                        {
                            ansx=xx;
                            ansy=yy;
                        }
                    }
                    else
                    {
                        //printf("%d %d\n",mpi[make_pair(x,y)]+1)
                        xx=mpi[make_pair(x,y)]+1;
                        yy=++time;
                        if(yy-xx<=ansy-ansx)
                        {
                            ansx=xx;
                            ansy=yy;
                        }

                    }
                }
                else
                    mpi[make_pair(x,y)]=++time;
            }
            if(ansy-ansx==1)
            {
                break;
            }
        }
        if(ansy-ansx==INT_MAX)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d %d\n",ansx,ansy);
        }
    }





    return 0;
}

