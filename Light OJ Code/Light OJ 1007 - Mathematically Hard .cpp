#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define N 1000001
ull phi[5*N];
bool mark[5*N];

void seivePhi()
{
    for(ll i=1;i<5*N;i++) phi[i]=i;
    phi[1]=1;
    mark[1]=1;
    for(ll i=2;i<5*N;i++)
    {
        if(!mark[i])//if i is prime
        {
            for(ll j=i;j<5*N;j+=i)
            {
                mark[j]=1;
                phi[j]-=phi[j]/i;//n = n - n/i;
            }
        }
    }
}
int main()
{
    seivePhi();
    ///Counting score
    for(ll i=1;i<5*N;i++)
    {
        phi[i]=phi[i]*phi[i];
    }
    ///Cumulative sum for O(1) query
    for(ll i=1;i<5*N;i++)
    {
        phi[i]+=phi[i-1];///phi[0]=0
    }
    int t,a,b;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        scanf("%d %d",&a,&b);
        printf("Case %d: %llu\n",tc,phi[b]-phi[a-1]);
    }
    return 0;
}
