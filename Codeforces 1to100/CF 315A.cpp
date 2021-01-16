#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ache[n],jabe[n];
    int cnt[1005]={0};
    bool pos[1005]={false};
    for(int i=0;i<n;i++)
    {
        cin>>ache[i]>>jabe[i];
        pos[jabe[i]]==true;
        cnt[ache[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(pos[ache[i]]==true)
        {
            if(ache[i]==jabe[i])
        }
    }


}
