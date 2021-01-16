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
    while(t--)
    {
        string n;
        cin>>n;
        int cnt=0;
        for(int len =1; len <=12; len++)
        {
            string s="";
            bool yes = false;
            for(char ch = '1'; ch<='9'; ch++)
            {
                int length=len;
                s="";
                while(length--)
                {
                    s+=ch;
                }
                //watch(s);
                if(s.size()<n.size())
                {
                    cnt++;
                    //cout<<"IN if "<<s<< " "<<n<<endl;
                }
                else if(stoi(s)<=stoi(n))
                {
                    cnt++;//cout<<"IN else if "<<s<< " "<<n<<endl;
                }
                else
                {
                    yes = true;
                    break;
                }
            }
            //watch(cnt);
            if(yes)
                break;

        }

        cout<<cnt<<endl;
        //watch(cnt);
    }






    return 0;
}

