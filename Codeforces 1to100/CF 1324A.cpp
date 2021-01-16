#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mn = min(mn,arr[i]);
        }

        bool ok = true;
        for(int i=0;i<n;i++)
        {
            if((arr[i]-mn)&1)
            {
                ok=false;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;


    }

    return 0;
}
