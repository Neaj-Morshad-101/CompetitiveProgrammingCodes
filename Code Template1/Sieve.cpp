#include<bits/stdc++.h>
using namespace std;




#define mxn 5000006
vector<int>prime;

bool vis[mxn];

void sieve() {
    int x=sqrt((int)mxn);
    for(int i=3; i<=x; i+=2) {
        if(vis[i]==0) {
            for(int j=i*i; j<mxn; j+=2*i)
                vis[j]=1;
        }
    }
    prime.push_back(2);
    for(int i=3; i<mxn; i+=2)
        if(vis[i]==0)
            prime.push_back(i);
}


int main()
{
    sieve();

    int limit = 20;
    for(int i=0; ; i++)
    {
        cout<<prime[i]<<" ";

        if(i>limit) break;
    }
    cout<<endl;
}
