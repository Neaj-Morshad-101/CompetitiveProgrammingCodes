#include<bits/stdc++.h>
using namespace std;



#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    faster_io;

    int t;
    cin>>t;
    int a,b,p;
    while(t--)
    {
        cin>>a>>b>>p;
        string s;
        cin>>s;
        int len=s.size();
        int pos= len;
        if(len==1)
        {
            cout<<1<<endl;
            continue;
        }
        bool oka=false,okb=false;
        for(int i=len-2; i>=0; i--)
        {
            if(s[i]=='A')
            {
                if(oka==false)
                {
                    if(p>=a)
                    {
                        p-=a;
                        pos=i+1;
                        oka=true;
                    }
                    else break;

                }
                else if(oka==true)
                {
                    pos=i+1;
                }

                okb=false;

            }
            if(s[i]=='B')
            {
                if(okb==false)
                {
                    if(p>=b)
                    {
                        p-=b;
                        pos=i+1;
                        okb=true;
                    }
                    else break;

                }
                else if(okb==true)
                {
                    pos=i+1;
                }

                oka=false;

            }

        }
        cout<<pos<<endl;
    }
    return 0;
}


