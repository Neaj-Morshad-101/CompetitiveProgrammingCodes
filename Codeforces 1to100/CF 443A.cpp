#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    bool cnt[26]= {false};

    if(s.size()==2)
        cout<<"0"<<endl;
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==',' or s[i]=='}')
                cnt[s[i-1]-'a']=true;
        }

        int c=0;
        for(int i=0; i<26; i++)
        {
            if(cnt[i])
                c++;
        }

        cout<<c<<endl;
    }







    return 0;
}
