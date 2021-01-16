#include<bits/stdc++.h>
using namespace std;

#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define watch(x) cout<<#x<<" = "<<x<<endl

int main()
{
    faster_io;
    int t,n,m,k,p;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n>>m>>k;
        int arr[n][k];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                cin>>arr[i][j];
            }
        }
        cin>>p;
        int arr_p[p];
        for(int i=0;i<p;i++)
        {
            cin>>arr_p[i];
        }
    }
    return 0;
}
