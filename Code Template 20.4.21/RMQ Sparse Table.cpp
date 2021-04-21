#include<bits/stdc++.h>
using namespace std;

#define MAXN 1000005
#define K 19

int st[MAXN][K + 1];
int Log[MAXN+1];
int N;

int arr[MAXN];


//calculating log efficiently.
void calc_Log()
{
    Log[1] = 0;
    for (int i = 2; i <= MAXN; i++)
        Log[i] = Log[i/2] + 1;
}


//processing rmq with func()
void process_rmq()
{
    for (int i = 0; i < N; i++)
    {
        st[i][0] = arr[i];
    }

    for (int j = 1; j <= K; j++)
        for (int i = 0; i + (1 << j) <= N; i++)
            st[i][j] = min(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);
}



int main()
{
    calc_Log();

    //input
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }


    process_rmq();

    /// 0 based indexing is used. So be careful when using index.

    /// can be used for max, min , and , or, gcd etc. where overlapping doesn't matter.



    int q;
    cin>>q;
    while(q--)
    {
        int L,R;
        cin>>L>>R;
        int jj = Log[R - L + 1];
        int Min = min(st[L][jj], st[R - (1 << jj) + 1][jj]);
        cout<<Min<<endl;
    }
}
