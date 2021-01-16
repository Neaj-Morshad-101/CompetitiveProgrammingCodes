#include<bits/stdc++.h>
using namespace std;
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    faster_io;
    int n,k;
    cin>>n>>k;
    vector<int>a(n);

    for(auto &it:a)
        cin>>it;

    sort(a.begin(),a.end());

    vector<pair<int,int>>cnt;

    for(int it:a)
    {
        if(cnt.empty() or cnt.back().first!=it)
        {
            cnt.push_back({it,1});
        }
        else
        {
            cnt.back().second++;
        }
    }

    vector<int> prefcnt,sufcnt;
    vector<long long>prefsum,sufsum;

    for(int i=0; i<(int)cnt.size(); i++)
    {
        if(prefcnt.empty())
        {
            prefcnt.push_back(cnt[i].second);
            prefsum.push_back(cnt[i].first * 1LL * cnt[i].second);
        }
        else
        {
            prefcnt.push_back(cnt[i].second+prefcnt.back());
            prefsum.push_back(prefsum.back()+(cnt[i].first*1LL*cnt[i].second));
        }
    }

    for(int i=(int)cnt.size()-1; i>=0 ; i--)
    {
        if(sufcnt.empty())
        {
            sufcnt.push_back(cnt[i].second);
            sufsum.push_back(cnt[i].first * 1LL * cnt[i].second);
        }
        else
        {
            sufcnt.push_back(cnt[i].second+sufcnt.back());
            sufsum.push_back(sufsum.back()+cnt[i].first * 1LL * cnt[i].second);
        }
    }

    reverse(sufcnt.begin(),sufcnt.end());
    reverse(sufsum.begin(),sufsum.end());

    long long ans=1e18;

    for(int i=0; i<(int)cnt.size(); i++)
    {
        int cur=max(0,k-cnt[i].second);

        int needl=0;
        if(i > 0)
        {
            needl=min(cur,prefcnt[i-1]);
        }
        ///
        int needr=cur-needl;
        long long res=0;

        if(needl)
        {
            res+=(prefcnt[i-1] * 1ll * (cnt[i].first - 1)) - prefsum[i - 1];
            res +=needl;
        }

        if(needr)
        {
            res+=sufsum[i + 1]-(sufcnt[i + 1] * 1ll * (cnt[i].first + 1));
            res+=needr;
        }

        ans = min(ans, res);

        res=0;
        needr=0;
        if(i<cnt.size() - 1)
        {
            needr=min(cur, sufcnt[i+1]);
        }

        needl = cur - needr;


        if(needr)
        {
            res+=sufsum[i + 1]- (sufcnt[i + 1] * 1ll * (cnt[i].first + 1));
            res+=needr;
        }

        if(needl)
        {
            res+=(prefcnt[i-1] * 1ll * (cnt[i].first - 1)) - prefsum[i - 1];
            res +=needl;
        }

        ans=min(ans,res);
    }

    cout<<ans<<endl;



}
