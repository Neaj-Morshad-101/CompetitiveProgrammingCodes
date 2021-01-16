#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        int n,x;
        scanf("%d",&n);
        //int arr[n+5]={0};
        unordered_map<int,int> mp;
        while(n--)
        {
            scanf("%d",&x);
            mp[x+1]++;
        }
        long long sum=0,pro;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->first>=it->second) sum+=it->first;
            else
            {
                pro=0;
                pro+=ceil((double)it->second/(double)it->first);
                sum+=(pro*it->first);
            }
        }
        printf("Case %d: %lld\n",tc,sum);
    }
    return 0;
}
