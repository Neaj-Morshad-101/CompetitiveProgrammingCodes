#include<bits/stdc++.h>
using namespace std;
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int josephus(int n,int k)
{
    if(n==1) return 1;
    return (josephus(n-1,k)+k-1)%n+1;
}
int main()
{
    faster_io;
    int t,n,k;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n>>k;
        printf("Case %d: %d\n",tc,josephus(n,k));
    }
    return 0;

}
