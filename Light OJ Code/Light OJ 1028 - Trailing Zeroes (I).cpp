#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Size 1000010
bool isPrime[Size];
ll prime[100001];
void sieve()
{
    isPrime[0]=isPrime[1]=true;
    for(int i=4;i<Size;i+=2) isPrime[i]=true;
    int sq=sqrt(Size+5);
    isPrime[2]=false;
    for(int i=3;i<=sq;i+=2)
    {
        if(isPrime[i]==false)
        {
            for(int j=i*i;j<Size;j+=i) isPrime[j]=true;
        }
    }
    int i=0;
    prime[i++]=2;
    for(int j=3;j<Size;j+=2)
    {
        if(isPrime[j]==false)
        {
            prime[i++]=j;
        }
    }
//    for(int i=0;i<100000;i++)
//        cout<<prime[i]<<" ";
//    cout<<endl;
}
ll Nod(ll n)
{
    ll sq=sqrt(n+1);
    ll cnt,nod=1;
    for(int i=0;prime[i]<=sq;i++)
    {
        cnt=0;
        while(n%prime[i]==0)
        {
            cnt++;
            n/=prime[i];
        }
        nod*=(cnt+1);
        if(n==1) break;
    }
    if(n>1) nod*=2;
    return nod;
}

int main()
{
    sieve();
    int t;
    scanf("%d",&t);
    ll n;
    for(int tc=1;tc<=t;tc++)
    {
        scanf("%lld",&n);
        printf("Case %d: %lld\n",tc,Nod(n)-1);
    }
    return 0;
}

