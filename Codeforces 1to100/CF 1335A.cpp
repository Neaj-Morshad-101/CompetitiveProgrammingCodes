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
        int a,b;
        if(n&1)
        {
            a=n/2 + 1;
            b = a-1;
        }
        else
        {
            a=n/2;
            b=a;
            a++;
            b--;
        }
        cout<<b<<endl;
    }


    return 0;
}
