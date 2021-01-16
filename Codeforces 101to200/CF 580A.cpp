#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    bool vis[n];
    memset(vis,false,sizeof vis);
    int mx=1;
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1]) cnt++;
        else
        {
            mx=max(cnt,mx);
            cnt=1;
        }
    }
    mx=max(mx,cnt);
    cout<<mx<<endl;

    cout<<*max_element(arr,arr+n)<<endl;

    return 0;
}
