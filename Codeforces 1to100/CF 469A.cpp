#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    bool arr[n+1];
    memset(arr,false,sizeof arr);
    for(int i=1;i<=2;i++)
    {
        int p;
        cin>>p;
        while(p--)
        {
            int xx;
            cin>>xx;
            arr[xx]=true;
        }
    }

    bool pass=true;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==false)
        {
            pass=false;
            break;
        }
    }

    if(pass)
    {
        cout<<"I become the guy."<<endl;
    }
    else cout<<"Oh, my keyboard!"<<endl;
}
