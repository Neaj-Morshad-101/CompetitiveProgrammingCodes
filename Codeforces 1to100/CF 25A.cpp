#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int oddindex=-1,evenindex=-1;
    int evenCnt=0,oddCnt=0;
    int in=0;
    while(n--)
    {
        in++;
        int x;
        cin>>x;
        if(x&1)
        {
            oddCnt++;
            if(oddCnt==1) oddindex=in;
        }
        else
        {
            evenCnt++;
            if(evenCnt==1) evenindex=in;
        }
    }
    oddCnt==1?cout<<oddindex<<endl:cout<<evenindex<<endl;
}
