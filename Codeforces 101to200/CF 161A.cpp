#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int giv[n+1],rec[n+1];
    for(int i=1;i<=n;i++) cin>>giv[i];
    for(int i=1;i<=n;i++)
    {
        rec[giv[i]]=i;
    }
    for(int i=1;i<=n;i++) cout<<rec[i]<<" ";


    return 0;
}
