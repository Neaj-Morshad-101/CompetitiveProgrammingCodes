#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);

    int mx = max(arr[0]-0, l - arr[n-1]);

    int gap=0;
    for(int i=1;i<n;i++)
    {
        gap = max(gap,arr[i]-arr[i-1]);
    }

    mx = max(2*mx, gap);

    double d = (double)mx/2.00;
    printf("%0.10f\n",d);



    return 0;
}
