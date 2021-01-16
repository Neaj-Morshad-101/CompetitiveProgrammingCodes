#include<bits/stdc++.h>
using namespace std;
vector<int>v(100005);
int cnt[2];
bool visited[100005];
void dfs(int node,int flag)
{
    cnt[flag]++;
    int sz=v[node].size();
    for(int i=0;i<sz;i++)
    {
        if(visited[v[node][i]) continue;
        dfs(v[node][i],1-flag);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    visited[1]=true;
    dfs(1,0);
    cout<<cnt[0]*cnt[1]-(n-1)<<endl;
    return 0;


}








const int N = 100005;
int color[N];
vector<int>G[N];

void dfs(int node,int pre,int c)
{
   color[node] = c;
   for(int i : G[node]){
      if(i==pre)continue;
      dfs(i,node,1-c);
   }
}
int main()
{
   FastRead
   MEM(color,-1);
   int n;
   cin >> n;
   FOR(i,1,n - 1)
   {
      int a,b;
      cin >> a >> b;
      G[a].pb(b);
      G[b].pb(a);
   }
   LL x = 0, y = 0;
   dfs(1,1,0);
   FOR(i,1,n){
      if(color[i] == 0)x++;
      else y++;
   }
   LL ans = x*y - (n-1);
   cout << ans << "\n";
}
