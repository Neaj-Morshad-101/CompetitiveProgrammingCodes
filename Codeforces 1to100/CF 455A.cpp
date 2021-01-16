#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,cnt[100000+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>x;
        cnt[x]++;
    }

    long long dp[100000+1];
    dp[0]=0;
    dp[1]=cnt[1];

    for(int i=2;i<=100000;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+(long long)i*cnt[i]);
    }

    cout<<dp[100000]<<endl;

    return 0;
}
