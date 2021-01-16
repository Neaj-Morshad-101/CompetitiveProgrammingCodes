#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    n = min(n,m);
    if(n&1)
    {
        cout<<"Akshat"<<endl;
    }
    else cout<<"Malvika"<<endl;


    return 0;
}
