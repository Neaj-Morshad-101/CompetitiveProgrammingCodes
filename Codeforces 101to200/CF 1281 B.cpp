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
    int t;
    cin>>t;
    string s,c;
    while(t--)
    {
        cin>>s>>c;
        if(s<c)
        {
            cout<<s<<endl;
            continue;
        }
        string sorted=s;
        sort(sorted.begin(),sorted.end());
        int len = s.size();
//        int cnt[26]={0};
//        for(int i=0;i<len;i++)
//        {
//            cnt[s[i]-'A']++;
//        }
        for(int i=0;i<len;i++)
        {
            bool temp=false;
            if(s[i]>sorted[i])
            {
                for(int j=i+1;j<len;j++)
                {
                    if(s[j]==sorted[i])
                    {
                        swap(s[j],s[i]);
                        temp=true;
                        break;
                    }
                }
            }
            if(temp) break;
        }
        if(s<c)
        {
            cout<<s<<endl;

        }
        else cout<<"---"<<endl;
    }






    return 0;
}

