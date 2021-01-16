#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];


    int m;
    cin>>m;
    int barr[m];
    for(int i=0;i<m;i++) cin>>barr[i];

    sort(arr,arr+n);
    sort(barr,barr+m);

    int cnt=0;
    for(int i=0,j=0;i<n and j<m;)
    {
        if(abs(arr[i] - barr[j])<=1)
        {
            cnt++;
            i++;j++;
        }
        else if(arr[i]<barr[j])
        {
            i++;
        }
        else j++;
    }

    cout<<cnt<<endl;

}
