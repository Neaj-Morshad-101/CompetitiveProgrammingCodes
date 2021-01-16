#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') cnt++;
            if(s[i]==')' and  cnt) cnt--;
            ///cout<<cnt<<endl;
        }

        cout<<cnt<<endl;
    }

    return 0;
}
