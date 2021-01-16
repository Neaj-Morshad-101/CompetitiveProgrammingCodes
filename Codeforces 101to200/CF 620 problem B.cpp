#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[10]={6,2,5,5,4,5,6,3,7,6};
    long long total=0;
    for(int num=a;num<=b;num++)
    {
        //cout<<"Hi"<<endl;
         int temp= num;
         while(temp)
         {
             total += arr[temp%10];
             temp/=10;
         }
    }
    printf("%lld\n",total);

}
