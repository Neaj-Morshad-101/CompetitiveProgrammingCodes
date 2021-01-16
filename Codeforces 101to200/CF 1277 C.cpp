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
    string s;
    while(t--)
    {
        set<int>Set;
        cin>>s;
        int len = s.size();
        string ss;
        for(int i=0; i<len-2; i++)
        {
            ss=s.substr(i,3);
            if(ss=="one")
            {
                if(s[i-1]!='o')
                Set.insert(i);
                else Set.insert(i+1);

            }
            else if(ss=="two")
            {
                if(i+3<len && s[i+3]!='o')
                Set.insert(i+2);
                else Set.insert(i+1);
            }
        }
        cout<<Set.size()<<endl;
        if(Set.size()>0)
        {
            for(auto it = Set.begin(); it!=Set.end(); it++)
            {
                cout<<*it+1<<" ";
            }
            cout<<endl;
        }
        else cout<<endl;
    }

    return 0;
}

////onetwonetwooneooonetwooo
////6
////17 12 11 22 1 6


