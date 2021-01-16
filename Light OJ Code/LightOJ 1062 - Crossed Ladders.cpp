#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-7
int main()
{

    int t;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        double x,y,c;
        cin>>x>>y>>c;

        double lo = 0.0 , hi = min(x,y),w;

        while(hi-lo>EPS)
        {
            w = (hi + lo)/2.0;
            double h1 = sqrt((x*x) - (w*w));
            double h2 = sqrt((y*y) - (w*w));

            double h = (h1 * h2)/(h1 + h2);

            if(h<=c)
            {
               hi = w;
            }
            else lo = w;


        }

        printf("Case %d: %0.8lf\n",tc,lo);


    }

    return 0;
}
