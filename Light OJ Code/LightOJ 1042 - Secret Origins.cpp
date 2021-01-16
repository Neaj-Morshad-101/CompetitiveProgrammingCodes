#include<bits/stdc++.h>
using namespace std;
#define ll long long

int table[16]= {0, 1, 1, 2, 1, 2, 2, 3,1, 2, 2, 3, 2, 3, 3, 4};

ll binary_to_decimal(string s)
{
    ll exp=1;
    ll decimal=0,i=0;
    int len =s.size();
    while(len)
    {
        decimal+=(s[--len]-'0')*exp;
        exp*=2;

    }
    return decimal;
}

int SetBitCnt(ll n)
{
    int cnt =0;
    while(n)
    {
        cnt+=table[n&15];
        n>>=4;
    }
    return cnt;
}


int main()
{
    int t;
    scanf("%d",&t);
    int n,bit,cnt;
    for(int tc=1; tc<=t; tc++)
    {
        scanf("%d",&n);
        cnt=SetBitCnt(n);
        bit=log2(n)+1;

        printf("cnt : %d   bit : %d\n",cnt,bit);

        int i=0,j=0,a[70];
        while(n)
        {
            a[i++]=n%2;
            n/=2;
        }
        char binary[70];
        for( i=i-1,j=1; i>=0; i--,j++)
        {
            binary[j]=a[i]+'0';
        }
        binary[j]=0;
        for(int i=1;binary[i]!=0;i++)
            cout<<binary[i]<<" ";
        cout<<endl;
        int pos;
        bool flag=0,flip=0;
        for(int i=bit;i>=1;i--)
        {
            if(flag)
            {
                if(binary[i]=='0')
                {
                    flip=1;
                    break;
                }
                else pos=i;
            }
            else if(binary[i]=='1')
            {
                flag=1;
                pos=i;
            }
        }
        if(flip)
        {
            cout<<"Pos : "<<pos<<endl;
            swap(binary[pos],binary[pos-1]);
            binary[0]='0';
        }
        else
        {
            binary[0]='1';
            for(int i=1;i<=bit;i++) binary[i]='0';
            for(int i=0;i<=bit;i++) cout<<binary[i]<<" ";
            cout<<endl;
            int setbit=cnt;
            cout<<"SetBit : "<<setbit<<endl;
            setbit-=1;
            for(int i=bit;i>0;i--)
            {
                if(setbit==0) break;
                binary[i]='1';
                setbit--;
            }
            for(int i=0;i<=bit;i++) cout<<binary[i]<<" ";
            cout<<endl;

        }
        string ss=binary;
        cout<<ss<<endl;
        int result = binary_to_decimal(ss);
        printf("Case %d: %d\n",tc,result);

        //printf("Cnt : %d bit : %d",cnt,bit);


//        for(ll i=n+1;;i++)
//        {
//            if(cnt ==SetBitCnt(i))
//            {
//                printf("Case %d: %lld\n",tc,i);
//                break;
//
//            }
//        }
    }
    return EXIT_SUCCESS;
}
