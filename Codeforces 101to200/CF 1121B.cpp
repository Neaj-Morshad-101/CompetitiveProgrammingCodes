#include<bits/stdc++.h>
using namespace std;
int cnt[200009];
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cnt[arr[i]+arr[j]]++;
        }
    }
    cout<<*max_element(cnt,cnt+200009);
    return 0;
}
