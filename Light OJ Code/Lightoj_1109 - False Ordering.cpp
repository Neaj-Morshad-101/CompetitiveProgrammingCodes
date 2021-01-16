#include<bits/stdc++.h>
using namespace std;
#define size 1001

int main()
{
    int i,divisors[1001],j,k,numbers[1001],ordered_numbers[1001];
    for(i=1; i<1001; i++)
    {
        numbers[i]=i;
        int sq=sqrt(i);
        int cnt=0;
        if(i==1)
            divisors[i]=1;
        else
        {
            for(j=1; j<=sq; j++)
            {
                if(i%j==0)
                {
                    cnt++;
                }
            }
            divisors[i]=cnt*2;
            if(sqrt(i)==(int)sqrt(i))
            {
                divisors[i]-=1;
            }
        }
       //cout<<"numbers : "<<numbers[i]<<"    divisors :  "<<divisors[i]<<endl;
    }
//    int Max_value=divisors[1];
//    int Max_index=1;
//    for(i=1;i<1001;i++)
//    {
//        if(Max_value<divisors[i])
//        {
//            Max_value=divisors[i];
//            Max_index=i;
//        }
//           // Max_value=max(Max_value,divisors[i]);
//    }
//    cout<<Max_value<<endl;
//    cout<<Max_index<<endl;
    int ordered_numbers_index=2;
    ordered_numbers[1]=1;
    for(i=2;i<=32;i++)
    {
        for(j=1000;j>0;j--)
        {
            if(divisors[j]==i)
            {
                ordered_numbers[ordered_numbers_index++]=j;

            }
        }
    }
    int t,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        printf("Case %d: %d\n",i,ordered_numbers[n]);
        //cout<<ordered_numbers[n]<<endl;
    }
//    cout<<"ordered numbers : "<<endl;
//    for(i=1;i<1001;i++)
//    {
//        cout<<ordered_numbers[i]<<endl;
//    }

//    for(i=1;i<1000;i++)
//    {
//        int min_indx=i;
//        for(j=i+1;j<1001;j++)
//        {
//            if(divisors[min_indx]>divisors[j]) min_indx=j;
//        }
//        if(min_indx!=i)
//        {
//            swap(divisors[i],divisors[min_indx]);
//            swap(numbers[i],numbers[min_indx]);
//        }
//    }
//    for(i=1;i<=1000;i++)
//    cout<<"numbers : "<<numbers[i]<<"    divisors :  "<<divisors[i]<<endl;
    /*for(i=1; i<1000; i++)
    {
        //cout<<"numbers : "<<numbers[i]<<"    divisors :  "<<divisors[i]<<endl;
        int min_index=i,Min=divisors[i];
        for(j=i+1; j<=1000; j++)
        {
            if(Min>=divisors[j])
                min_index=j;
        }
        if(min_index!=i)
        {
            swap(divisors[i],divisors[j]);
            swap(numbers[i],numbers[j]);
        }
        //cout<<"Sorting Loop "<<endl;
    }
    for(i=1; i<=1000; i++)
    {
        cout<<"numbers : "<<numbers[i]<<"    divisors :  "<<divisors[i]<<endl;
    }
    */


}
