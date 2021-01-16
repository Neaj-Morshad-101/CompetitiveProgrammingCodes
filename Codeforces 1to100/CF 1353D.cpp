#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<pair<int,int>>pq;
        int arr[n+1]={0};
        pq.push({n,-1});
        int cnt=0;
        while(!pq.empty())
        {
            auto tp=pq.top();
            pq.pop();
            int len = tp.first, left = -tp.second;
            int right = left + len -1;

            int mid = (left+right)/2;
            arr[mid] = ++cnt;

            if(left<mid)
            {
                pq.push({mid - left , - left});
            }
            if(right> mid)
            {
                pq.push({right - mid, -(mid +1)});
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
