#include<bits/stdc++.h>
using namespace std;
#define sz 1000000
#define gama 0.5772156649
double arr[sz+10];
void calc()
{
    arr[0]=1;
    for(int n=2; n<=sz; n++)
    {
        arr[n-1]=arr[n-2]+(1.0/(double)n);
    }
}
int main()
{
    calc();
    int t=1;
    int n;
    while(t--)
    {
        scanf("%d",&n);
        if(n<1000000)
            printf("%.10f\n",arr[n-1]);
        else
        {
            double ans = log(n)+gama+(1.0/(2.0*n))-(1.0/(12.0 * n * n));
            printf("%.10f\n",ans);
        }

    }
    return 0;
}

