#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        int csum[n];
        for(int i=0;i<n;i++)
        {
            if(i)
            {
                csum[i] = csum[i-1] + arr[i];
                //csum[i] = csum[i]%x;
            }

            else csum[i] = arr[i];
        }
        int mxLen = 0;
        for(int l = 0; l<n; l++)
        {
            for(int r = l; r<n ; r++)
            {
                if(l == 0)
                {
                    if(csum[r]%x) mxLen = r - l + 1;
                }
                else
                {
                    if((csum[r] - csum[l-1])%x)
                        mxLen = r - l + 1;
                }

            }
        }


        if(mxLen) cout<<mxLen<<endl;
        else cout<<"-1"<<endl;
    }
}
