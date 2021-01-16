#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define mx 100005

int arr[mx+10];
int n,s,k;

void solve()
{
    scanf("%d%d%d",&n,&s,&k);
    map<int,int>m;

    for(int i=0;i<k;i++)scanf("%d",&a[i]),m[a[i]]++;

    int re=0;

    int ex=0;

    while(1)
    {
        if(s+ex<=n)
        {
            if(m[s+ex]==0)
            {
                re=ex;
                break;
            }
        }

        if(s-ex>0)
        {
            if(m[s-ex]==0)
            {
                re=ex;
                break;
            }
        }

        ex++;
    }

    cout<<re<<endl;

   return;
}

int main()
{
    int t=1;
    cin>>t;

    while(t--)solve();

    return 0;
}
