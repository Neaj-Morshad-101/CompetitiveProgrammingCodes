#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int> segment[n];
    cin>>arr[0];
    int indx=0;
    segment[indx].push_back(arr[0]);

    int len = 1;
    int mxLen=INT_MIN;

    for(int i=1; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>arr[i-1])
        {
            len++;
            segment[indx].push_back(arr[i]);
        }
        else
        {
            mxLen=max(len,mxLen);
            len =1;
            indx++;
            segment[indx].push_back(arr[i]);
//            mxLen=max(len,mxLen);
//            len = 1;
//            index.push_back(i-1);
        }
    }
    mxLen=max(len,mxLen);
    for(int i=1; i<=indx; i++)
    {
        if(segment[i-1].size()>=2)
        {
            auto it = segment[i-1].end()-2,it2=segment[i].begin();
            if((*it)<(*it2))
            {
                int value =segment[i].size();
                value+=segment[i-1].size();
                value--;
                mxLen=max(mxLen,value);
            }
            else if(*(it+1)<*(it2+1))
            {
                int value =segment[i].size();
                value+=segment[i-1].size();
                value--;
                mxLen=max(mxLen,value);
            }

        }

    }
    cout<<mxLen<<endl;
//    cout<<segment[2].size()<<endl;
//    cout<<segment[0].size()<<endl;
//    cout<<segment[1].size()<<endl;

//    mxLen=max(len,mxLen);
//    cout<<mxLen<<endl;
//    for(auto it = index.begin(); it!=index.end(); it++)///1 2 5 3 4
//    {
//        cout<<*it<<" ";
//        if(*it==0) continue;
//
//
//    }

    return 0;
}
