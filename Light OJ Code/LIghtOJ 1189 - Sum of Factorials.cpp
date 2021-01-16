#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[21+5];
ll factorial(ll x)
{
    if(x>1 && a[x]!=0)
        return a[x];
    if(x>1)
        return x*=factorial(x-1);
    else
        return 1;
}
int main()
{
    for(int i=0; i<21; i++)
        a[i]=factorial(i);
    ll t,n;
    scanf("%lld",&t);
    for(int i=1; i<=t; i++)
    {
        bool flag[21]= {false};
        scanf("%lld",&n);
        int j=20;
        for(j=20; j>=0; j--)
        {
            if(n>=a[j])
            {
                n-=a[j];
                flag[j]=true;
                if(n==0)
                    break;
            }
        }
        if(n!=0)
            printf("Case %d: impossible\n",i);
        else
        {
            printf("Case %d: ",i);
            int f=0;
            for(int k=0; k<21; k++)
            {
                if(flag[k]==true)
                {
                    if(f==0)
                    {
                        f=1;
                        printf("%d!",k);
                    }
                    else
                        printf("+%d!",k);
                }
            }
            printf("\n");
        }
    }
    return 0;
}


