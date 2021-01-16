#include<bits/stdc++.h>
using namespace std;

long double ValueOfLog[1000009];

void SetValue()
{
    long long  i;
    for(i=1; i<=1000000; i++)
    {
        ValueOfLog[i]=ValueOfLog[i-1]+log10(i);
    }
}

int main()
{
    SetValue();
    int t,n,b;

    cin>>t;
    long long  i;
    long double log10b;
    long long logbn;
    for(i=1; i<=t; i++)
    {
        cin>>n>>b;

        log10b=log10(b);
        logbn=ValueOfLog[n]/log10b;
        printf("Case %lld: %lld\n",i,logbn+1);

    }
    return 0;
}
