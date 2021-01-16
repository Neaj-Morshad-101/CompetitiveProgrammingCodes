#include<bits/stdc++.h>
using namespace std;


int main()
{
    int len,sum;
    cin>>len>>sum;
    if(sum==0 && len==1)
    {
        cout<<0<<" "<<0<<endl;
        return 0;
    }



    int nonZeroLen=ceil(sum/9.0);
    if(len<nonZeroLen or nonZeroLen==0)
    {
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    int lastDigit;
    if(nonZeroLen*9==sum)
        lastDigit=9;
    else
        lastDigit=sum%9;

    int zeroLen=len-nonZeroLen;


    if(nonZeroLen==len)
    {
        ///for min if nonzeroLen=len
        cout<<lastDigit;
        for(int i=1; i<nonZeroLen; i++)
            cout<<9;
        cout<<" ";
    }

    else
    {
        cout<<1;
        zeroLen=len-nonZeroLen-1;
        for(int i=0;i<zeroLen;i++) cout<<0;
        cout<<lastDigit-1;
        for(int i=1;i<nonZeroLen;i++) cout<<9;

        cout<<" ";
    }

    zeroLen=len-nonZeroLen;
    /// for max
    for(int i=1; i<nonZeroLen; i++)
        cout<<9;
    cout<<lastDigit;
    for(int i=0; i<zeroLen; i++)
        cout<<0;
    cout<<endl;


    return 0;
}

