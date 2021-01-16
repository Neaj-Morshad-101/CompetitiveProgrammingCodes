#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        int op=0;
        bool okay=false;
        cin>>a>>b;
        if(a<b)
        {
            bool m=true;
            while(a<b and m)
            {
                m=false;
                for(int i=1;i<=3;i++)
                {
                    if(a*2<=b)
                    {
                        a*=2;
                        m=true;
                    }
                }
                if(m) op++;
            }
            if(a!=b) cout<<"-1"<<endl;
            else cout<<op<<endl;

        }
        else if(a>b)
        {
            bool d=true;
            while(a>b and d)
            {
                d=false;
                for(int i=1; i<=3; i++)
                {
                    if(a%2==0 and a/2>=b)
                    {
                        a/=2;
                        d=true;
                    }
                }
                if(d) op++;

            }
            if(a!=b) cout<<"-1"<<endl;
            else cout<<op<<endl;
        }
        else
        {
            cout<<"0"<<endl;

        }
    }
}
