#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n,p,q,i,j;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>p>>q;
        int a[n],cntegg=0,cntweight=0;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            if(cntegg+1<=p && cntweight+a[j]<=q)
            {
                cntegg++;
                cntweight+=a[j];
            }
            else
            {
                break;
            }
        }
        printf("Case %d: %d\n",i,cntegg);
    }
    return 0;
}
