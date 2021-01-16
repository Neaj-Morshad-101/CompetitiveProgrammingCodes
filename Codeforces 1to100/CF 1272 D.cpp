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

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    ll mxsub=0,sub=1;
    int temp=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[i-1])
        {
            sub++;
        }
        else
        {
            //watch2(sub,mxsub);

            mxsub=max(mxsub,sub);
            if(i-2>=0)
            {
                if(arr[i]>arr[i-2])
                {
                    if(temp==1)
                    {
                        sub=1;
                        temp=0;
                    }
                    else
                    {
                        sub+=0;
                        temp=1;
                    }

                }
                else
                {
                    sub=1;
                    temp=0;
                }

            }
            else
            {
                temp=0;
                sub=1;
            }
        }
    }
    //watch2(sub,mxsub);

    mxsub=max(mxsub,sub);
    //watch2(sub,mxsub);

//    if(i-2>=0)
//    {
//        if(arr[i]>arr[i-2])
//        {
//            sub+=0;
//        }
//        else
//            sub=0;
//    }
    //mxsub=max(mxsub,sub);

    cout<<mxsub<<endl;


///12 23 12 23 0 6 23 10 21 17 21 15 23 7 14 27 8 23 13 13
//1 7 4 0 9 4 8 8 2 4
//5 5 1 7 1 1 5 2 7
//6 1 4 2 3 2 2 1
//6 8 5 7 6 1 8
//9 2 7 9 5 4
//3 1 2 3 3
//4 1 1 3
//8 7 4
//2 7
//7


    return 0;
}

