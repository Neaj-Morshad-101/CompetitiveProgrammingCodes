#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n0,n1,n2;
        cin>>n0>>n1>>n2;
        if(n1)
        {
            string s(n2+1,'1');

            string s0(n0+1, '0');
            s+=s0;

            n1--;
            for(int i=1; n1 ; i++)
            {
                if(i&1)
                {
                    s+='1';
                }
                else s+='0';
                n1--;
            }

            cout<<s<<endl;
        }
        else
        {
            if(n0)
            {
                string s(n0+1, '0');
                cout<<s<<endl;
            }
            else
            {
                string s(n2+1, '1');
                cout<<s<<endl;
            }
        }
    }
}
