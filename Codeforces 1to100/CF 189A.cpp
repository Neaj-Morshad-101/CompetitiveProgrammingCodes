#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int mx = -1;
    for(int x = 0; x<=n/a; x++)
    {
        for(int y=0; y<=(n-(x*a))/b; y++)
        {
            int rem = n - (a*x + b*y);
            if(rem%c==0)
            {
                mx= max(mx, x + y + rem/c);
            }
        }
    }
    cout<<mx<<endl;

    return 0;

}
