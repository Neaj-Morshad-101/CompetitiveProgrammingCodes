#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool a[10000];
vector <ll> v,v2,v3;
ll N=1;
ll sum=1;


void Bubble_Sort()
{
    ll i,j,k,ok=0;

    ll n = 1000;

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            if(v3[j]>v3[j+1]){
                ok=1;
                swap(v2[j+1],v2[j]);
                swap(v3[j+1],v3[j]);
            }
            else if(v3[j] == v3[j+1]){
                if(v2[j]<v2[j+1]){
                ok=1;
                swap(v2[j+1],v2[j]);

                }
            }
        }


        if(ok==0) break;


        ok=0;

    }


}

void Sieve(ll n)
{
    for(ll i=3; i*i<=n; i+=2){
        if(a[i] == false){
        for(ll j=i*i; j<=n; j=j+i+i){
            a[j]=true;
        }
      }
    }

    v.push_back(2);

    for(ll i=3; i<=n; i+=2){
        if(a[i] == false){
        v.push_back(i);
        N++;
        }
    }

}

//673469
void Primefactors(ll n)
{
    ll i=0,Count=1,k=0;

    while(n>=v[i]){

        if(n%v[i] == 0){

            n/=v[i];

            k++;
            continue;
        }
        Count*=(k+1);
        k=0;
        i++;

    }
    Count*=(k+1);

    v3.push_back(Count);


}

int main()
{
   // freopen("text.txt", "r", stdin);

    Sieve(1005);

    ll n,k;

    for(ll i=1; i<=1000; i++){
        v2.push_back(i);
        Primefactors(i);
    }
    Bubble_Sort();

   cin >> n;

    //n = 1005;

   for(ll i=1; i<=n; i++){

        ll Index;

        cin >> Index;

        printf("Case %lld: %lld\n", i, v2[Index-1]);

   }

 //  cout << "end";

    return 0;

}
