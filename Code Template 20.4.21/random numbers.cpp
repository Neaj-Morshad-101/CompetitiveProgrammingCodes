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
    int line = 5;
    int numbers=10;
    bool pos=true;
    ll mxvalue = 100;
    ll minvalue = 1;
    while(line--)
    {
        for(int i=0; i<numbers; i++)
        {
            ll sum = rand();
            int j = rand();
            while(j%4)
            {
                sum+=rand();
                j++;
            }
            if(pos)
                cout<<max(minvalue, abs(sum%mxvalue))<<" ";
            else
                cout<<max(minvalue, (sum%mxvalue))<<" ";
            //cout<<rand()%100<<endl;
        }
        cout<<endl;
    }

//1 0 9 9 5
//3 4 5 7 2
//9 8 4 1 6
//0 2 4 4 3
//3 0 4 0 2
//
//1 0 9 9 5 3
//4 5 7 2 9 8
//4 1 6 0 2 4
//4 3 3 0 4 0
//2 5 6 0 4 6


//1 0 9 9 5 3 4 5 7 2
//9 8 4 1 6 0 2 4 4 3
//3 0 4 0 2 5 6 0 4 6
//7 0 0 6 7 0 9 8 0 3
//2 0 0 6 5 7 7 4 2 1

// between 0 to 4
//3 0 2 2 1 3 3 1 2 0
//1 2 1 0 2 1 2 0 0 3
//0 1 0 2 3 2 1 0 2 3
//3 3 3 2 2 3 0 0 3 1
//2 1 2 2 1 0 1 2 3 2


    return 0;
}

