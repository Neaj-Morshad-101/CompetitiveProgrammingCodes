#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,type,x;
    cin>>N;
    int ara[N],top=-1,mx=INT_MIN;
    while(N--)
    {
        cin>>type;
        if(type==1)
        {
            top++;
            cin>>x;
            ara[top]=x;
            if(mx<=x) mx=x;

        }
        else if(type ==2)
        {
            if(mx==ara[top])
            {
                mx = INT_MIN;
                for(int i=0;i<top;i++)
                {
                    mx=max(mx,ara[i]);
                }
            }
            top--;
        }
        else cout<<mx<<endl;

    }

    return 0;
}
