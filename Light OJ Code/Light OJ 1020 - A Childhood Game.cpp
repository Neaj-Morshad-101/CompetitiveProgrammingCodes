#include<bits/stdc++.h>
using namespace std;
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    faster_io;
    int t,n;
    string s;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        cin>>n>>s;
        if(s=="Alice")
        {
            if(n%3==1)
            {
                printf("Case %d: Bob\n",tc);

            }
            else
                printf("Case %d: Alice\n",tc);
        }
        else
        {
            if(n%3==0)
            {
                printf("Case %d: Alice\n",tc);
            }
            else
                printf("Case %d: Bob\n",tc);
        }
    }
    return 0;
}
