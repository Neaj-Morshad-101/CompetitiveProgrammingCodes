#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int mxPos=0,minPos=0,mx = arr[0],mn = mx;


    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx = arr[i];
            mxPos = i;
        }
        if(arr[i]<=mn)
        {
            mn = arr[i];
            minPos = i;
        }
    }

    if(mxPos>minPos) mxPos--;
    n--;
    cout<<mxPos + n - minPos <<endl;


    return 0;


}
