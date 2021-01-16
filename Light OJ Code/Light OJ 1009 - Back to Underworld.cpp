#include<bits/stdc++.h>
using namespace std;

#define mx  20000

vector<int> v[mx+1];
int vis[mx+1];

int calculate_result()
{
    int result=0;
    int L,V,x;
    for(int i=1;i<=mx;i++)
    {
        if(v[i].size()==0 || vis[i]) continue;

        queue<int>Q;
        L=V=0;
        Q.push(i);
        vis[i]=1;
        L++;
        while(!Q.empty())
        {
            x=Q.front();
            Q.pop();

            for(auto value:v[x])
            {
                if(vis[value]==0)
                {
                    Q.push(value);

                    if(vis[x]==1)
                    {
                        vis[value]=2;
                        V++;
                    }
                    else
                    {
                        vis[value]=1,L++;
                    }
                }
            }

        }

        result+=max(L,V);
        //cout<<result<<endl;


    }
    return result;
}

int main()
{
    int t,edge,x,y;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>edge;
        while(edge--)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int result=calculate_result();
        printf("Case %d: %d\n",tc,result);

        for(int i=1;i<=mx;i++)
        {
            v[i].clear();
            vis[i]=0;
        }



    }
}
