#include<bits/stdc++.h>
using namespace std;


///typedef
typedef long long ll;

///faster io
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///debug
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"

///program starts...........

#define mxn 200010

ll n, arr[mxn], dp[mxn];

ll solve_func(int pos)
{
    if(pos>n) return 0;

    if(dp[pos]!=-1)
        return dp[pos];

    ll ans = arr[pos] + solve_func(pos + arr[pos]);

    dp[pos] = ans;
    return ans;
}

void solve_case(int tc)
{
    memset(dp, -1, sizeof dp);

    cin>>n;

    for(int i=1;i<=n;i++)
        cin>>arr[i];

    ll mx_sum = INT_MIN, sum;

    for(int i=1; i<=n; i++)
    {
        sum = solve_func(i);
        mx_sum = max(mx_sum, sum);
    }
    cout<<mx_sum<<endl;

    return;
}

int main()
{
    faster_io;

    int test_case=1;
    cin>>test_case;
    for(int tc=1 ; tc<=test_case; tc++)
    {
        solve_case(tc);
    }
///  KeyPoint
///  solve for each index only one time.
/// 10^4 * 2^10^5 2*10^9 2 sec

    return 0;
}

