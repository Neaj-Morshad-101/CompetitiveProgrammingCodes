#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }


    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                swap(x[j],x[j+1]);
                swap(y[j],y[j+1]);
            }
        }
    }

    bool can = true;



    for(int i=0;i<n;i++)
    {
        if(s>x[i])
        {
            s+=y[i];
        }
        else
        {
            can=false;
            break;
        }
    }

    if(can)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;

}

