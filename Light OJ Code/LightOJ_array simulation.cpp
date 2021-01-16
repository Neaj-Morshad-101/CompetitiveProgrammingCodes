#include<bits/stdc++.h>
using namespace std;


void ReverseArray(int x[],int n)
{
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        int temp=x[i];
        x[i]=x[j];
        x[j]=temp;
    }
}
int main()
{

//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
    int t ;
    int i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int x=n;
        int a[x];
        int j;
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        getchar();
        int k;
        char s[5];
        int d;
        int y,z;
        for(k=1; k<=m; k++)
        {
            scanf("%s",s);
            if (s[0]=='S')
            {
                scanf("%d",&d);
                //getchar();
                for(j=0; j<n; j++)
                {
                    a[j]=a[j]+d;
                }
            }


            else if (s[0]=='M')
            {

                scanf("%d",&d);
                //getchar();
                for(j=0; j<n; j++)
                {
                    a[j]=a[j]*d;
                }
            }

            else if (s[0]=='D')
            {

                scanf("%d",&d);
                //getchar();
                for(j=0; j<n; j++)
                {
                    a[j]=a[j]/d;
                }
            }
            else if (s[0]=='R')
            {
                ReverseArray(a,n);
            }

            else if(s[0]=='P')
            {
                scanf("%d %d",&y,&z);
                //getchar();
                int temp;
                temp=a[y];
                a[y]=a[z];
                a[z]=temp;
            }
        }
        printf("Case %d:\n",i);
        for(j=0; j<n; j++)
        {
            if (j+1==n)
            {
                printf("%d\n",a[j]);
            }
            else
                printf("%d ",a[j]);
        }
    }
    return 0;
}
