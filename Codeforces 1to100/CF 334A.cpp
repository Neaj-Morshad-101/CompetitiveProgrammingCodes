#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    n--;
    int prev = x,cnt=1;
    while(n--)
    {
        cin>>x;
        if(x!=prev)
        {
            cnt++;
            prev=x;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
