#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0, add;
    add = n/100;
    cnt+=add;
    n-=add*100;

    add = n/20;
    cnt+=add;
    n-=add*20;


    add = n/10;
    cnt+=add;
    n-=add*10;

    add = n/5;
    cnt+=add;
    n-=add*5;

    add = n/1;
    cnt+=add;
    n-=add*1;
    assert(n==0);

    cout<<cnt<<endl;

    return 0;
}
