#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int cnt=1;

    for(int i=k;;i+=k)
    {
        if(i%10==r or i%10 == 0)
        {
            break;
        }
        cnt++;
    }

    cout<<cnt<<endl;


    return 0;
}
