#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int rem = 240-k;
    int cnt=0;


    for(int i=1;i<=n;i++)
    {
        if(5*i<=rem)
        {
            cnt++;
            rem-= 5*i;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
