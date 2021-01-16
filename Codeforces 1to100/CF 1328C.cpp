#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        string a="",b="";
        cin>>n>>s;
        bool first=true;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='2')
            {
                if(first){
                a+='1';b+='1';}
                else
                {
                    a+='0';b+='2';
                }
            }
            else if(s[i]=='0')
            {
                a+='0'; b+='0';
            }
            else
            {
                if(first)
                {
                    a+='1';b+='0'; first=false;
                }
                else
                {
                    a+='0';b+='1';
                }

            }

        }
        cout<<a<<endl;
        cout<<b<<endl;
    }
}
