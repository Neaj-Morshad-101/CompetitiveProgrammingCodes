#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int N = n;
    int x;
    cin>>x;
    int mn=x,mx=x,mncnt=1,mxcnt=1;
    while(--n)
    {
        cin>>x;
        if(x>mx)
        {
            mx = x;
            mxcnt =1;
        }
        else if(x==mx) mxcnt++;

        if(x<mn)
        {
            mn=x;
            mncnt = 1;
        }
        else if(x==mn) mncnt++;
    }
    if(mn==mx)
    {
        cout<<"0 ";
        cout<<(long long)N*(N-1)/2<<endl;
    }
    else
    cout<<mx-mn<<" "<<(long long)mxcnt*mncnt<<endl;
}
