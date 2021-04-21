#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 17

inline long long bigmod (long long a, long long p, long long m) {
    long long res = 1 % m, x = a % m;
    while ( p ) {
        if ( p & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m;
        p >>= 1;
    }
    return res;
}


ll BigMod(ll x,ll n)
{
    if(n==0) return 1;
    ll y=BigMod(x,n/2);
    ll res = (y * y) % mod;
    if(n&1)
        res =  (x*res)%mod;
    return res;
}

int main()
{
    ll x,n;
    cin>>x>>n;
    cout<<BigMod(x,n)<<endl;
    return 0;
}

