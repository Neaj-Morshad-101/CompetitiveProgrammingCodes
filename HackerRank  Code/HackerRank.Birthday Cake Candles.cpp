#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],mx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==mx) cnt++;
    }
    cout<<cnt<<endl;
    return 0;

}
