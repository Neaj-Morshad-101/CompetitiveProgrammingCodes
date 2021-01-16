#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[26];
    for(int i=0;i<26;i++)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    int l=s.size(),mx=-1;
    for(int i=0;i<l;i++)
    {
        mx=max(mx,a[s[i]-'a']);
    }
    cout<<l*mx<<endl;



    return 0;
}

