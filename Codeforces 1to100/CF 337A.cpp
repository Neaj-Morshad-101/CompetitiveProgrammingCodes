#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++) cin>>arr[i];
    sort(arr,arr+m);
    int mn = INT_MAX;
    for(int i=0;i<=m-n;i++)
    {
        mn=min(mn,abs(arr[i+n-1]-arr[i]));
    }
    cout<<mn<<endl;

    return 0;
}
