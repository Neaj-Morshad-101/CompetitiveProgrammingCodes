#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n,x;
    cin>>t;//Test Case
    while(t--)
    {
        cin>>n;//number of elements of Array
        int cnt[3]= {0};//for Count reminder of each number of array (divisible by 3) .
        while(n--)
        {
            cin>>x;
            cnt[x%3]++;
        }
        int extra=0,ans = cnt[0]+min(cnt[1],cnt[2]);//Here if i add number with reminder 1 and reminder 2 .
        //then i will get number divisible by 3.
        if(cnt[1]!=cnt[2])
             extra=cnt[1]>cnt[2]?cnt[1]-cnt[2]:cnt[2]-cnt[1];
             //Here I count numbers those i didn't added so for .
    //Now if I add 3 numbers with reminder 1 then I will get 1 number that will be divisilble by 3.
    // And Same for numbers with reminder 2.

        ans+=extra/3;
        cout<<ans<<endl;
    }
    return 0;
}

