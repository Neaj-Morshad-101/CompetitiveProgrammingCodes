#include<bits/stdc++.h>
using namespace std;

#define maxN 10000005
#define ll long long
bool prime[maxN+500];
//int only_prime[maxN+500],last_index;
void Sieve()
{
    prime[0]=prime[1]=1;
    for(int i=4; i<=maxN; i+=2)
        prime[i]=1;

    int root=sqrt(maxN+50);
    for(int i=3; i<=root; i+=2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=maxN; j+=i)
                prime[j]=1;
        }
    }
}
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    Sieve();
//    int index =0;
//    only_prime[index++]=2;
    vector<int> p;
    p.push_back(2);
    for(int i=3; i<=maxN; i+=2)
    {
        if(prime[i]==false)
        {
            //only_prime[index++]=i;
            p.push_back(i);
        }
    }
    // last_index=index;
    int t,n;
    scanf("%d",&t);
    for(int tc=1; tc<=t; tc++)
    {
        scanf("%d",&n);
        int cnt=0;
        //for(int i=0; i<last_index; i++)
        for(vector<int>::iterator it = p.begin(); it!=p.end(); it++)
        {
            //if(only_prime[i]<=n/2)
            if(*it>n/2)
                break;
            if(prime[n-*it]==false)
                cnt++;

//            if(prime[n-only_prime[i]]==false)
//                cnt++;


        }
        printf("Case %d: %d\n",tc,cnt);
    }
    return 0;
}
