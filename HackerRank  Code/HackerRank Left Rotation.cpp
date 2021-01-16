#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,rotation,x,pos;
    cin>>n>>rotation;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        pos= (i-rotation)%n;
        if(pos<0) pos+=n;
        arr[pos]=x;
    }
    for(int value:arr)
    {
        cout<<value<<" ";
    }
    cout<<endl;

}
