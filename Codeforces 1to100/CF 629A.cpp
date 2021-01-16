#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>s[i][j];
        }
    }
    int happy = 0,cnt;
    for(int i=0;i<n;i++)
    {
        cnt =0;
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='C') cnt++;
        }
        happy+=(cnt * (cnt -1))/2;
    }

    for(int i=0;i<n;i++)
    {
        cnt =0;
        for(int j=0;j<n;j++)
        {
            if(s[j][i]=='C') cnt++;
        }
        happy+=(cnt * (cnt -1))/2;
    }

    cout<<happy<<endl;



}
