
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10

#define mxn 100009


/// bigmod iterative
inline long long bigmod (long long a, long long p, long long m) {
    long long res = 1 % m, x = a % m;
    while ( p ) {
        if ( p & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m;
        p >>= 1;
    }
    return res;
}


ll BigMod(ll x)
{
    return x%mod;
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
ll ModInverse(ll x) // using BigMod
{
    return BigMod(x,mod-2)%mod;   /// IF mod is prime.
}

///Mod Inverse of all numbers between 1 to N with respect to M (N<M and M is prime)

int inv[mxn];

ll ModInverse_all()
{
    inv[1]=1;
    for(int i=2; i<=n; i++)
    {
        inv[i] = (-(mod/i) * inv[m%i])%mod;
        inv[i] = inv[i] + mod;
    }
}

///Using Extended Euclidian Algorithm

inline long long modInv (long long a, long long m) {
    long long x, y;
    ext_gcd(a, m, x, y);
    x %= m;
    if (x < 0) x += m;
    return x;
}

int main()
{
    ll x,n;
    cin>>x;
    cout<<BigMod(x)<<endl;
    cout<<ModInverse(x)<<endl;
    return 0;
}

