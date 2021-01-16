#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    for(int tc = 1; tc <= t; tc++)
    {
        ll  n;
        cin>>n;
        ll mx = 0, factor,i,N=n;
        for(i=2;i*i<=n;i++)
        {
            int cnt=0;
            while(n%i==0)
            {
                n/=i;
                cnt++;
            }

            if(cnt>mx)
            {
                mx = cnt;
                factor=i;
            }
        }

        if(n>1)
        {
            int cnt = 1;
            i=n;
            if(cnt>mx)
            {
                mx = cnt;
                factor=i;
            }

        }

        cout<<mx<<endl;
        for(int i=1;i<mx;i++)
        {
            cout<<factor<<" ";
        }
        N/=(pow(factor,mx-1));
        cout<<N<<endl;
    }
}
