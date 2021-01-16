#include<bits/stdc++.h>
using namespace std;

#define mxn 1000009
bool isPrime[mxn];

void sieve()
{
    memset(isPrime, true, sizeof isPrime);
    isPrime[1] = isPrime[0] = true;
    int sq=sqrt(mxn);
    for(int i=2;i<=sq; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<mxn; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;
    sieve();
    isPrime[n]=true;
    for(int i=0;i<=n;i++)
    {
        if(!isPrime[i] and !isPrime[n-i])
        {
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }

    return 0;

}
