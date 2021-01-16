#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt1[26]={0},cnt2[26]={0};
    string s,ss,sss;
    cin>>s>>ss>>sss;
    for(int i=0;i<s.size();i++)
    {
        cnt1[s[i]-'A']++;
    }

    for(int i=0;i<ss.size();i++)
    {
        cnt1[ss[i]-'A']++;
    }

    for(int i=0;i<sss.size();i++)
    {
        cnt2[sss[i]-'A']++;
    }

    bool okay = true;

    for(int i=0;i<26;i++)
    {
        if(cnt1[i]!=cnt2[i])
        {
            okay=false;
            break;
        }
    }
    if(okay)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
