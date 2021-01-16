#include<stdio.h>

#define ll long long
int main()
{
    ll n,k;
    scanf("%lld %lld",&n,&k);
    ll maxAND=0,maxOR=0,maxXOR=0;
    ll AND,OR,XOR;
    for(ll  i=1; i<=n-1; i++)
    {
        for(ll j=i+1; j<=n; j++)
        {
            //printf("i = %d   j = %d\n",i,j);
            AND  = i&j;
            OR = i|j;
            XOR = i^j;
            if((AND>maxAND && AND<k))
                maxAND = AND;
            if(OR>maxOR && OR<k)
                maxOR = OR;
            if(XOR>maxXOR && XOR<k)
                maxXOR = XOR;
//            cout<<maxAND<<endl;
//            cout<<maxOR<<endl;
//            cout<<maxXOR<<endl;
        }
    }
    printf("%lld\n%lld\n%lld\n",maxAND,maxOR,maxXOR);

//    printf("Final : \n");
//
//    cout<<maxAND<<endl;
//    cout<<maxOR<<endl;
//    cout<<maxXOR<<endl;


    return 0;

}
