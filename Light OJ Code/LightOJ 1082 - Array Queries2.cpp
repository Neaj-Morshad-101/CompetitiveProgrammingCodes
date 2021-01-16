#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mx 100000
ll arr[mx+10];
ll segtree[4*mx+10];
//ll cnt ;
ll Merge(ll p1,ll p2)
{
    return min(p1,p2);
}
void build(ll node,ll bg,ll ed)
{
    if(bg==ed)
    {
        segtree[node]=arr[bg];
        //cnt++;
        return ;
    }
    ll lft=2*node;
    ll rgt=lft+1;
    ll mid =(bg+ed)/2;
    build(lft,bg,mid);
    build(rgt,mid+1,ed);
    segtree[node]=Merge(segtree[lft],segtree[rgt]);
    //cnt++;
}
ll query(ll node,ll bg,ll ed,ll i,ll j)
{
    if(i>ed || j<bg)
    {
        return INT_MAX;
    }

    if(bg>=i && ed<=j)
        return segtree[node];
        //return arr[bg];
    ll lft=2*node;
    ll rgt=lft+1;
    ll mid= (bg + ed)/2;
    ll p1=query(lft,bg,mid,i,j);
    ll p2=query(rgt,mid+1,ed,i,j);
    return Merge(p1,p2);
}
int  main()
{


    faster_io;
    ll t;
    cin>>t;
    ll n,q;
    for(ll tc=1; tc<=t; tc++)
    {
        cin>>n>>q;
        //ll arr[n+5];
        ll index1,index2;
        for(ll i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
//        cout<<"Given Array : "<<endl;
//        for(ll i =1;i<=n;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//        cnt=0;
        build(1,1,n);

//        cout<<"number of nodes : "<<cnt<<endl;
//        cout<<"Segment tree : "<<endl;
//        for(ll i =1;i<=cnt;i++)
//        {
//            cout<<segtree[i]<<" ";
//        }
//        cout<<endl;
        cout<<"Case "<<tc<<":"<<endl;
        while(q--)
        {
            cin>>index1>>index2;
            cout<<query(1,1,n,index1,index2)<<endl;
        }
    }
    return 0;
}

