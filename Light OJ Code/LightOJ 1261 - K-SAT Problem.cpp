#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1;tc<=t; tc++)
    {
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        int arr[n][k];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        int p;
        scanf("%d", &p);
        set<int> s;
        set<int>::iterator it;
        while(p--)
        {
            int x;
            scanf("%d", &x);
            s.insert(x);
        }
        bool ok=true, fulfilled;
        for(int i=0;i<n;i++)
        {
            fulfilled=false;
            for(int j=0;j<k;j++)
            {
                if(arr[i][j]> 0)
                {
                    it=s.find(arr[i][j]);
                    if(it!= s.end())
                    {
                        fulfilled=true;
                        break;
                    }


                }
                else
                {
                    it=s.find((-arr[i][j]));
                    if(it==s.end())
                    {
                        fulfilled=true;
                        break;
                    }
                }

            }
            if(!fulfilled)
            {
                ok=false;
                break;
            }

        }
        if(ok)
        {
            printf("Case %d: Yes\n",tc);
        }
        else printf("Case %d: No\n", tc);
    }
}
