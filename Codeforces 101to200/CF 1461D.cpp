#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{

    int t=1;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        int n,qq;
        cin>>n>>qq;
        vector<int>v(n+1),psum(n+1);
        psum[0]=0;
        v[0]=-1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i+1];
        }
        sort(v.begin(),v.end());


        for(int i=0;i<n;i++)
        {
            psum[i+1]=psum[i]+v[i+1];
        }

        map<int,bool>pos;

        queue<pair<int, int>>q;
        q.push({1,n});
        while(!q.empty())
        {
            pair<int,int> p;
            p = q.front();
            q.pop();

            int lo = p.first, hi = p.second;

            if(lo==hi)
            {
                pos[v[lo]]=true;
                continue;
            }

            pos[psum[hi]-psum[lo-1]]=true;

            int mid = (v[hi]+v[lo])/2;

            auto it = upper_bound(v.begin()+lo,v.begin()+hi+1,mid);
            int i = (int)(it-v.begin());

            if(i>hi) continue;

            q.push({lo,i-1});
            q.push({i,hi});
        }

        while(qq--)
        {
            int ans;
            cin>>ans;
            if(pos[ans]) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }






    }
//  KeyPoint
//
//
//
    return 0;
}

