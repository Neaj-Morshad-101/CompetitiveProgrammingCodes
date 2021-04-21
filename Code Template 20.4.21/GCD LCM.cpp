#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;

    ///two numbers
    cout<<__gcd(a,b)<<endl;///works for ll also.....
    cout<<gcd(a,b)<<endl;

    /// n numbers

    int n; cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    ll g = 0;
    for(int i=0;i<n;i++)
    {
        g = __gcd(g,arr[i]);
    }

    cout<<g<<endl;

    /// a * b = gcd * lcm
}
