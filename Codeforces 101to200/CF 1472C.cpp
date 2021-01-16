#include<bits/stdc++.h>
using namespace std;


///typedef
typedef long long ll;

///faster io
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///debug
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"

///program starts...........



void solve(int tc)
{
    int n;
    cin>>n;
    int arr[n+10];
    for(int i=1;i<=n;i++) cin>>arr[i];

    ll profit[n+10]={0};

    for(int i=n; i>=1; i--)
    {
        if(i+arr[i]<=n)
        {
            profit[i]=arr[i] + profit[i+arr[i]];
        }
        else
        {
            profit[i]=arr[i];
        }

    }

    cout<<*max_element(profit, profit+n+10)<<endl;

    return;
}

int main()
{
    faster_io;

    int t=1;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        solve(tc);
    }
///  KeyPoint
///  solve for each index only one time.

    return 0;
}
