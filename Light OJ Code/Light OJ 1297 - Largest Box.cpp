#include<bits/stdc++.h>
using namespace std;

double l,w;

double f(double x)
{
    return (l-2*x)*(w-2*x)*x;
}

bool f2(double x)
{
    return (24*x-4*(l+w))<0;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1; tc<=t; tc++)
    {
        scanf("%lf %lf",&l,&w);

        double x,volume=-1,det;

        det=16*(l+w)*(l+w)-48*l*w;///assuming determinant always >= 0

        x=(4*(l+w)+sqrt(det))/24.0;
        if(f2(x)){
            volume=max(volume,f(x));
        }

        x=(4*(l+w)-sqrt(det))/24.0;
        if(f2(x)){
            volume=max(volume,f(x));
        }
        printf("Case %d: %.9f\n",tc,volume);
    }
    return 0;
}
