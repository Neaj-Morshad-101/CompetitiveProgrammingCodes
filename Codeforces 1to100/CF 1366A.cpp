#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,ra,rb;
        cin>>ra>>rb;
        a=ra; b=rb;
        int mn = min(a/3,b/3);
        int ans = 2*mn;
        a-=mn*3;
        b-=mn*3;
        if(a>b)
        {
            while(a>=2 and b>=1)
            {
                ans++;
                a-=2;
                b-=1;
            }
            while(a>=1 and b>=2)
            {
                ans++;
                a-=1;
                b-=2;
            }

        }
        while(a>=1 and b>=2)
        {
            ans++;
            a-=1;
            b-=2;
        }
        while(a>=2 and b>=1)
        {
            ans++;
            a-=2;
            b-=1;
        }

        int mxans=ans;

        a=ra;b=rb;

        mn = min(a,b/2);

        ans = mn;
        a-=mn;
        b-=mn*2;

        if(a>b)
        {
            while(a>=2 and b>=1)
            {
                ans++;
                a-=2;
                b-=1;
            }
            while(a>=1 and b>=2)
            {
                ans++;
                a-=1;
                b-=2;
            }

        }
        while(a>=1 and b>=2)
        {
            ans++;
            a-=1;
            b-=2;
        }
        while(a>=2 and b>=1)
        {
            ans++;
            a-=2;
            b-=1;
        }

        mxans=max(ans,mxans);




        a=ra;b=rb;

        mn = min(a/2,b);

        ans = mn;
        a-=mn*2;
        b-=mn;

        if(a>b)
        {
            while(a>=2 and b>=1)
            {
                ans++;
                a-=2;
                b-=1;
            }
            while(a>=1 and b>=2)
            {
                ans++;
                a-=1;
                b-=2;
            }

        }
        while(a>=1 and b>=2)
        {
            ans++;
            a-=1;
            b-=2;
        }
        while(a>=2 and b>=1)
        {
            ans++;
            a-=2;
            b-=1;
        }

        mxans=max(ans,mxans);








        cout<<mxans<<endl;




    }

    return 0;
}
