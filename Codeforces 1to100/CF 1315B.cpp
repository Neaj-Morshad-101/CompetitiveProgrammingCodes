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
        char prev=s[len-1];
        int pos=len,cnt=0;
        if(len == 1 )
        {
            cout<<1<<endl;
            continue;
        }
        for(int i=len-2; i>=0; i--)
        {
            if(s[i]==prev)
            {
                if(i==0)
                {
                    if(prev=='B')
                    {
                        if(p>=b)
                        {
                            p-=b;
                            pos=i+1;
                        }
                    }
                    else
                    {
                        if(p>=a)
                        {
                            p-=a;
                            pos=i+1;
                        }
                    }
                }
                cnt++;
            }
            if(s[i]!=prev)
            {
                if(i==0)
                {
                    if(cnt==0)
                    {
                        if(s[i]=='A')
                        {
                            if(p>=a)
                            {
                                p-=a;
                                pos=i+1;
                            }
                            else
                                break;
                        }
                        else
                        {
                            if(p>=b)
                            {
                                p-=b;
                                pos=i+1;
                            }
                            else
                                break;
                        }
                        prev=s[i];
                    }

                }
                else
                {
                    if(prev=='A')
                    {
                        if(p>=a)
                        {
                            p-=a;
                            pos=i+2;
                        }
                        else
                            break;
                    }
                    else
                    {
                        if(p>=b)
                        {
                            p-=b;
                            pos=i+2;
                        }
                        else
                            break;
                    }
                    prev=s[i];
                }
            }
        }


        cout<<pos<<endl;
    }




    return 0;
}

