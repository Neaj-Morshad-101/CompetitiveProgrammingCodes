#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    int caseno=0;
    while(t--)
    {
        double l,l2,h;
        cin>>l>>l2>>h;
        double hi=max(l,l2),lo=0;
        double a=-100,ans = -100;
        while(true)
        {
            double d =(hi+lo)/2;
            if(abs(ans-d)<1e-8) break;
            double h1=sqrt((l*l)-(d*d));
            double h2=sqrt((l2*l2)-(d*d));
            double H=(h1*h2)/(h1+h2);
            if(H==h)
            {
                ans = d;
                break;
            }
            else if(H<h)
            {
                hi=d;
            }
            else lo=d;
            ans = d;

        }
        printf("Case %d: %.8lf\n",++caseno,ans);
    }
    return 0;
}
