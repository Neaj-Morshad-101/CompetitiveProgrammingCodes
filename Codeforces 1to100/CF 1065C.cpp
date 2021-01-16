#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    sort(arr,arr+n);
    int cnt=0;
    //int limit=10;int beg=1;
//    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//    cout<<endl;
    for(int i=0;i<n;i++)
    {
//        ++beg;
//        if(beg>limit) break;
        ll sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum+=arr[j]-arr[i];
            if(sum>k) break;
        }
        if(sum==0) break;
        if(sum<=k)
        {
//            cout<<"i is "<<i<<endl;
//            cout<<"his "<<arr[i]<<endl;
//            cout<<"cnt is "<<cnt<<endl;
            cnt++;
            for(int j=i+1;j<n;j++)
            {
                arr[j]=arr[i];
            }
            if(i==0) break;
            else i=-1;
//            for(int k=0;k<n;k++) cout<<arr[k]<<" ";
//            cout<<endl;
//
//            cout<<"cnt is "<<cnt<<endl;
        }
    }
    cout<<cnt<<endl;


    return 0;
}


