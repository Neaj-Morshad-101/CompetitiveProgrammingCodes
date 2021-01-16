#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);
    int t;
    //cin>>t;
    scanf("%d",&t);
    int caseno=0;
    while(t--)
    {
        int n,q;
        //cin>>n>>q;
        scanf("%d %d",&n,&q);
        int arr[n+10];
        for(int i=0;i<n;i++)
        {
            //cin>>arr[i];
            scanf("%d",&arr[i]);
        }
        printf("Case %d:\n",++caseno);
        int left,right;
        while(q--)
        {
            //cin>>left>>right;
            scanf("%d %d",&left,&right);
            int hi_pos,low_pos;
            bool found=false;
            int indexL=0,indexR=n-1,indexM;
            while(indexL<=indexR)
            {
                indexM=(indexL+indexR)/2;
                if(arr[indexM]>=left and arr[indexM]<=right)
                {
                    found=true;
                    hi_pos=indexM;
                    indexL=indexM+1;
                }
                else if(arr[indexM]<left)
                {
                    indexL=indexM+1;
                }
                else indexR=indexM-1;
            }
            if(!found)
            {
                printf("0\n");
                continue;
            }

            indexL=0;indexR=n-1;
            while(indexL<=indexR)
            {
                indexM=(indexL+indexR)/2;
                if(arr[indexM]>=left and arr[indexM]<=right)
                {
                    low_pos=indexM;
                    indexR=indexM-1;
                }
                else if(arr[indexM]<left)
                {
                    indexL=indexM+1;
                }
                else indexR=indexM-1;
            }
            printf("%d\n",hi_pos-low_pos+1);
        }
    }

    return 0;
}
