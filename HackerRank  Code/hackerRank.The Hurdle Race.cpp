#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    int a[n],mx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(a[i],mx);
    }
    if(mx-k<=0) cout<<0<<endl;
    else cout<<mx-k<<endl;
    return 0;
}


