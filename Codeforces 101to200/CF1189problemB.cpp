 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pi acos(-1.0)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll num ;
    cin>>num;
    ll a[num+5];
    for(ll i=0;i<num;i++)
        cin>>a[i];
    sort(a,a+num,greater<ll>());
    ll temp= a[0];
    a[0]=a[1];
    a[1]=temp;
    if(a[0]+a[2]>a[1])
    {
        cout<<"YES"<<endl;
        for(ll i=0;i<num;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}
