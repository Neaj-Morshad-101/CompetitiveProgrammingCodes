#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    char grid[n][m];


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            grid[i][j]='.';
        }
    }

    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<m; j++)
            {
                grid[i][j]='#';

            }
        }
        else
        {
            if((i-1)%4==0)
            {
                grid[i][m-1]='#';
            }
            else grid[i][0]='#';
        }

    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }



}
