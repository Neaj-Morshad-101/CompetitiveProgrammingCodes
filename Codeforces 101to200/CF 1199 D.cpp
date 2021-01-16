#include<bits/stdc++.h>

using namespace std;

#define mx 200005
#define ll long long

struct me
{
    int val;

} tree[4*mx];

int a[mx],b[mx];


void val_update(int node,int be,int en,int pos,int value)
{
    if(pos<be||pos>en||be>en)
        return;

    if(be==en)
    {
        tree[node].val=max(tree[node].val,value);
        return;
    }

    int mid=(be+en)/2;

    val_update(node*2,be,mid,pos,value);
    val_update(node*2+1,mid+1,en,pos,value);

    tree[node].val=max(tree[node*2].val,tree[node*2+1].val);
}

int query(int node,int be,int en,int i,int j)
{
    if(i>en||j<be)return 0;
    if(i<=be&&j>=en)return tree[node].val;

    int mid=(be+en)/2;

    int p1=query(node*2,be,mid,i,j);
    int p2=query(node*2+1,mid+1,en,i,j);


    return max(p1,p2);

}


int main()
{

    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
        scanf("%d",a+i);


    int q;

    scanf("%d",&q);


    for(int i=1; i<=q; i++)
    {
        int num;
        scanf("%d",&num);


        if(num==1)
        {
            int pos,value;
            scanf("%d %d",&pos,&value);
            b[pos]=i;
            a[pos]=value;
        }
        else
        {

            int value;
            scanf("%d",&value);
            val_update(1,1,q,i,value);
        }
    }




    for(int i=1; i<=n; i++)
    {
        int re=0;
        if(b[i]<q)re=query(1,1,q,b[i],q);

        printf("%d ",max(re,a[i]));
    }




    return 0;
}

