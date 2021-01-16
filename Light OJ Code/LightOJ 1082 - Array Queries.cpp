#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mx 100000
int arr[mx+10];
int segtree[4*mx];
int Merge(int p1,int p2)
{
    return min(p1,p2);
}
void build(int node,int bg,int ed)
{
    if(bg==ed)
    {
        segtree[node]=arr[bg];
        return ;
    }
    int lft=2*node;
    int rgt=lft+1;
    int mid =(bg+ed)/2;
    build(lft,bg,mid);
    build(rgt,mid+1,ed);
    segtree[node]=Merge(segtree[lft],segtree[rgt]);
}
int query(int node,int bg,int ed,int i,int j)
{
    if(i>ed || j<bg)
    {
        return INT_MAX;
    }

    if(bg>=i && ed<=j)
        return segtree[node];
        //return arr[bg];
    int lft=2*node;
    int rgt=lft+1;
    int mid= (bg + ed)/2;
    int p1=query(lft,bg,mid,i,j);
    int p2=query(rgt,mid+1,ed,i,j);
    return Merge(p1,p2);
}
int main()
{
    faster_io;
    int t;
    cin>>t;
    int n,q;
    for(int tc=1; tc<=t; tc++)
    {
        cin>>n>>q;
        //int arr[n+5];
        int index1,index2;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        build(1,1,n);

        cout<<"Case "<<tc<<":"<<endl;
        while(q--)
        {
            cin>>index1>>index1;
            cout<<query(1,1,n,index1,index2)<<endl;
        }
    }
    return 0;
}
