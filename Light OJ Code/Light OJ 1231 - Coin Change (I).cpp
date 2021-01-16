#include<bits/stdc++.h>
using namespace std;
int const mod = 100000007;
int n,coin[51],times[51];
int dp[51][1001];
int way(int i,int make)
{
    if(i==n)
    {
        if(make==0)
            return 1;
        return 0;
    }
    if(dp[i][make]!=-1) return dp[i][make];
    for(int i=1;)
}
int main()
{
    int t;
    scanf("%d",&t);
    int make;
    for(int tc=1;tc<=t;tc++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%d %d",n,make);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&coin[i]);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&times[i]);
        }
        printf("Case %d: %d\n",tc,ans);
    }
    return 0;
}
