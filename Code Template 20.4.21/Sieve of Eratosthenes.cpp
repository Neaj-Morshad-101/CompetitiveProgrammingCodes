#include<bits/stdc++.h>
using namespace std;

#define n 100000
#define ll long long
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool prime[n+5];
ll Sqrt(ll n)
{
    ll sq = sqrt(n);
    while(sq*sq != n) sq++;
    return sq;
}
void Sieve()
{
    prime[0]=prime[1]=1;
    for(ll i=4;i<=n;i+=2) prime[i]=1;
    ll root=Sqrt(n);

    for(ll i=3;i<=root;i+=2)
    {
        if(prime[i]==false)
        {
            for(ll j=i*i; j<=n;j+=i) prime[j]=1;
        }
    }
}
int main()
{
    faster_io;
    Sieve();
    cout<<"Enter number to check prime or not"<<endl;
    ll x;
    while(scanf("%d",&x)!=EOF)
    {
        if(prime[x]==false) cout<<"Prime"<<endl;
        else cout<<"Not Prime"<<endl;
    }
    return 0;
}


