#include<bits/stdc++.h>
using namespace std;

bool isUpper(char ch)
{
    return (ch>='A' && ch<='Z');
}
int main()
{
    string s;
    cin>>s;
    int len=s.size();
    if(isUpper(s[0])==false)
    {
        bool allExceptFirstIsUpper=true;
        for(int i=1; i<s.size(); i++)
        {
            if(isUpper(s[i])==false)
            {
                allExceptFirstIsUpper=false;
                break;
            }
        }
        if(allExceptFirstIsUpper)
        {
            printf("%c",s[0]-'a'+'A');
            for(int i=1; i<s.size(); i++)
            {
                 printf("%c",s[i]-'A'+'a');
            }
            cout<<endl;
        }
        else cout<<s<<endl;

    }
    else
    {
        bool allUpper=true;
        for(int i=1; i<s.size(); i++)
        {
            if(isUpper(s[i])==false)
            {
                allUpper=false;
                break;
            }
        }
        if(allUpper)
        {
            for(int i=0; i<s.size(); i++)
            {
                 printf("%c",s[i]-'A'+'a');
            }
            cout<<endl;
        }
        else cout<<s<<endl;

    }

}
