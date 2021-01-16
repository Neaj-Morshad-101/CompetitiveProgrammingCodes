#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pi acos(-1.0)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll r;
    cin>>r;
    ll pro = r-1,x,y,sq,b;
    double cal_y;
    sq=sqrt(pro+1);
    if(pro&1)
    {
        // pro odd. then x and y is odd
        for(int i=1;i<=sq;i+=2)
        {

            if(pro%i==0)
            {
                b = pro/i;
                cal_y=(double)(b-i-1)/2;


                if(cal_y==(int)cal_y)
                {
                    cout<<i<<" "<<(int)cal_y<<endl;
                    exit(0);
                }
            }

        }
    }
    else
    {

        for(int i=1;i<=sq;i++)
        {

            if(pro%i==0)
            {
                b = pro/i;
                cal_y=(double)(b-i-1)/2;


                if( cal_y>0 && cal_y==(ll)cal_y)
                {
                    cout<<i<<" "<<(ll)cal_y<<endl;
                    exit(0);
                }
            }

        }
    }
    cout<<"NO"<<endl;




    return 0;
}

