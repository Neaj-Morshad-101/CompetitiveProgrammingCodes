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

        if(n%4!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        int arr[n];
        int x=2;
        for(int i=0;i<n/2;i++)
        {
            arr[i]=x;
            x+=2;

        }
        x=1;
        for(int i=n/2;i<n;i++)
        {
            arr[i]=x;
            x+=2;
        }
        arr[n-1]+=n/2;

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }


    }

    return 0;



}
