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
        int arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i];



        int psum[n+1]={0};
        for(int i=1 ; i<=n ; i++)
        {
            psum[i]=psum[i-1]+arr[i];
        }

//        for(int i=1;i<=n;i++)
//            cout<<psum[i]<<" ";
//        cout<<endl;

        bool special[n+1]={false};


        for(int i=1;i<n; i++)
        {
            for(int j=i+1 ; j<=n ; j++)
            {
                if(psum[j]-psum[i-1]<=n)
                special[psum[j]-psum[i-1]]=true;
            }
        }




        int total=0;
        for(int i=1;i<=n;i++)
        {
            total+=special[arr[i]];
        }


        cout<<total<<endl;
    }
}
