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

    int  t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int len = s.size();
        string spo,sdesu,smasu,smnida;
        if(len>=2)
        {
            spo="";
            spo+=s[len-2];
            spo+=s[len-1];
            if(spo=="po")
            {
                cout<<"FILIPINO"<<endl;
                continue;
            }
            if(len>=4)
            {
                sdesu="";
                sdesu+=s[len-4];
                sdesu+=s[len-3];
                sdesu+=s[len-2];
                sdesu+=s[len-1];

                if(sdesu=="desu" || sdesu=="masu")
                {
                    cout<<"JAPANESE"<<endl;
                    continue;
                }
            }
            if(len>=5)
            {
                smnida="";
                smnida+=s[len-5];
                smnida+=s[len-4];
                smnida+=s[len-3];
                smnida+=s[len-2];
                smnida+=s[len-1];
                if(smnida=="mnida")
                {
                    cout<<"KOREAN"<<endl;
                    continue;
                }
            }
        }
    }




    return 0;
}

