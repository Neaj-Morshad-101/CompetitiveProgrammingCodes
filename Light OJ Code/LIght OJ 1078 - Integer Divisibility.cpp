#include<bits/stdc++.h>
using namespace std;
//#define watch(x) cout<<#x<<" = "<<x<<endl
//#define watch(x,y) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl
////#define watch(x,y,z) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl<<#z<<" = "<<z<<endl
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t,n,d;
    scanf("%d",&t);
    for(int tc=1; tc<=t; tc++)
    {
        scanf("%d %d",&n,&d);
        int ans =1;
        int num =d;
        if(num%n==0)
        {
            printf("Case %d: %d\n",tc,ans);
            continue;
        }
        while(num)
        {
            //watch(num,ans);
            num=num*10+d;
            ans++;
            num%=n;
            //watch(num,ans);
        }
        printf("Case %d: %d\n",tc,ans);
    }
}
