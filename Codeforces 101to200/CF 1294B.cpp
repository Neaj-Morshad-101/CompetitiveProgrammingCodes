#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x[n],y[n];
        ///input
        for(int i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
        }
        /// Sorting in increasing x : I want to go Right first then Upper.
        ///Bubble sort
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(x[i]>x[i+1])
                {
                    swap(y[i],y[i+1]);
                    swap(x[i],x[i+1]);
                }
                /// if x is same then smaller y must come first
                else if(x[i]==x[i+1])
                {
                    if(y[i]>y[i+1])
                    {
                        swap(y[i],y[i+1]);
                        swap(x[i],x[i+1]);
                    }
                }
            }
        }
        ///result String first NULL
        string s="";
        int cnt=n;
        int prevx=0,prevy=0;
        for(int i=0; i<n; i++)
        {
            if(x[i]-prevx>=0)
            {
                for(int r=1; r<=x[i]-prevx; r++)
                {
                    s+='R';
                }
            }
            else
                break;
            prevx=x[i];
            if(y[i]-prevy>=0)
            {
                for(int u=1; u<=y[i]-prevy; u++)
                {
                    s+='U';
                }
            }
            else
                break;
            prevy=y[i];
            cnt--;
        }
        /// if all point is visited
        if(cnt==0)
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
