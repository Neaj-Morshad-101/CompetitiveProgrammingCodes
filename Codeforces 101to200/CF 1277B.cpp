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

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        int mx=INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]&1)
                arr[i]=0;
            mx=max(mx,arr[i]);
        }
        int cnt=0;
        while(mx)
        {
            int div=mx;
            mx =0;
            //watch2(mx,div);
            int temp=0;
            for(int i=0; i<n; i++)
            {

                if(arr[i]==div)
                {
                    arr[i]/=2;
                    temp=1;
                    if(arr[i]&1)
                        arr[i]=0;
                    mx=max(mx,arr[i]);
                }
                else
                    mx=max(mx,arr[i]);
            }
            cnt+=temp;
        }
        //watch(cnt);
        cout<<cnt<<endl;
    }




    return 0;
}

