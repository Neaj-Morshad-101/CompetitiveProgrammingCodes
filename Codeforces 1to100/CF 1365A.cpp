#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        short int arr[n][m];

        for(int i=0; i<n ; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>> arr[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j] == 1)
                {
                    for(int temp=0;temp<m;temp++) if(arr[i][temp] ==0 ) arr[i][temp] =2;
                    for(int temp=0;temp<n;temp++) if(arr[temp][j]==0 ) arr[temp][j] = 2;
                }
            }
        }

        int a = 0;

        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(arr[i][j]==0)
                    {
                        for(int temp=0;temp<m;temp++) arr[i][temp]=1;
                        for(int temp=0;temp<n;temp++) arr[temp][j]=1;
                        a = 1 - a;
                    }
                }
            }
        }

        if(a==0)
        {
            cout<<"Vivek"<<endl;
        }
        else cout<<"Ashish"<<endl;

    }

    return 0;
}
