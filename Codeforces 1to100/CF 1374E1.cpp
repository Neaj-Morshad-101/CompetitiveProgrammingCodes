#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int t[n],a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i]>>a[i]>>b[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(t[j]>t[j+1])
            {
                swap(t[j],t[j+1]);
                swap(a[i],a[i+1]);
                swap(b[i],b[i+1]);
            }
        }
    }
    int ans =0,ak=0,bk=0;
    bool okay = false;
    for(int i=0;i<n;i++)
    {

        if(ak<k and a[i])
        {
            ak++;
            ans+=t[i];
            if(b[i]) bk++;
        }
        else if(bk<k and b[i])
        {
            bk++;
            ans+=t[i];
        }

        if(ak>=k and bk>=k)
        {
            okay=true;
            break;
        }
    }

    if(okay)
    {
        cout<<ans<<endl;
    }
    else cout<<"-1"<<endl;


   return 0;
}
