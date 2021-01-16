#include<bits/stdc++.h>
using namespace std;

bool isDistinct(int n)
{
    bool distinct[10];
    memset(distinct,false,sizeof distinct);
    while(n)
    {
        if(distinct[n%10]) return false;
        else
        {
            distinct[n%10]=true;
            n/=10;
        }
    }
    return true;
}
int main()
{
    int year;
    cin>>year;
    for(int i=year+1;;i++)
    {
        if(isDistinct(i))
        {
            cout<<i<<endl;
            break;
        }
    }

}

