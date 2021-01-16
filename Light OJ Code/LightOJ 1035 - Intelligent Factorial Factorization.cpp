#include<bits/stdc++.h>
using namespace std;
int status[101];
void prime()
{
    status[0]=status[1]=1;
    for(int i=4; i<=100; i+=2)
        status[i]=1;
    int sq=sqrt(100);
    for(int i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i; j<=100; j+=i)
            {
                status[j]=1;
            }
        }
    }
}
int main()
{
    prime();
    int i=0,Prime[25];
    for(int j=0; j<=100; j++)
    {
        if(status[j]==0)
        {
            Prime[i++]=j;
        }
    }
    //for(int i=0;i<25;i++) printf("%d ",Prime[i]);

    int T,n;
    scanf("%d",&T);
    for(int tc=1; tc<=T; tc++)
    {
        scanf("%d",&n);
        int cnt[101]= {0};
        int index=0;
        for(int i=2; i<=n; i++)
        {
            index=0;
            int temp=i;
            while(temp!=1)
            {
                while(temp%Prime[index]==0)
                {
                    temp/=Prime[index];
                    cnt[Prime[index]]++;
                }
                index++;
            }
        }
        printf("Case %d: %d =",tc,n);
        int flag=0;
        for(int i=0; i<=100; i++)
        {
            if(flag==0 && cnt[i]>0)
            {
                printf(" %d (%d)",i,cnt[i]);
                flag=1;
            }
            else if(flag==1 && cnt[i]>0)
            {
                printf(" *");
                printf(" %d (%d)",i,cnt[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
