#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    //scanf("%d",&t);
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b;
        //scanf("%d %d",&a,&b);

        cin>>a>>b;
        a--;
        int cntb=b/3*2;
        int cnta=a/3*2;
        if(b%3==2) cntb++;
        if(a%3==2) cnta++;
        //cout<<"Case "<<i<<": "<<cntb-cnta<<endl;
        printf("Case %d: %d\n",i,cntb-cnta);
    }
    return 0;
}
