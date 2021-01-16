#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    ll s;
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&s);
        double RC=sqrt(s);
        ll rc=ceil(RC);
        ll high=rc*rc;
        ll low=(rc-1)*(rc-1)+1;
        ll mid=(high+low)/2;
        if(mid==s)
            printf("Case %d: %lld %lld\n",i,rc,rc);
        else if(s<mid)
        {
            ll pos=s-low+1;
            if(rc%2==0)
                printf("Case %d: %lld %lld\n",i,pos,rc);
            else
                printf("Case %d: %lld %lld\n",i,rc,pos);
        }
        else
        {
            ll pos=high-s+1;
            if(rc%2==0)
                printf("Case %d: %lld %lld\n",i,rc,pos);
            else
                printf("Case %d: %lld %lld\n",i,pos,rc);
        }
    }
    return 0;
}

