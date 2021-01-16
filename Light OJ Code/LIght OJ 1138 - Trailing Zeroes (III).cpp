#include<bits/stdc++.h>
using namespace std;

int cnt(int n)
{
    int cntt=0,pow5=5;
    while(1)
    {
        int ans=n/pow5;
        if(ans<1) break;
        else cntt+=ans;
        pow5*=5;
    }
    return cntt;
}

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int q;
        cin>>q;
        int high=5*q,low=5,mid;
        int ans=INT_MAX;
        bool found=false;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(cnt(mid)==q)
            {
                found=true;
                ans=min(ans,mid);
                high=mid-1;
            }
            else if(cnt(mid)>q)
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        if(found)
        {
            printf("Case %d: %d\n",tc,ans);
        }
        else printf("Case %d: impossible\n",tc);
    }

    return 0;
}
