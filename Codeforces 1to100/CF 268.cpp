#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int h[n],g[n];

    int guest[101]={0};

    for(int i=0;i<n;i++)
    {
        cin>>h[i]>>g[i];

        guest[g[i]]++;
    }
    int cnt =0;
    for(int i=0;i<n;i++)
    {
        cnt += guest[h[i]];
    }

    cout<<cnt<<endl;

    return 0;
}
