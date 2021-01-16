#include<bits/stdc++.h>
using namespace std;


///typedef
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

///define constant
const ll INF = 2000000000000000000LL;///2e18
const ld EPS = 1e-9;
const ld pi  = acos(-1.0);
const ll mx = 100005;

///faster io
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///debug
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"
#define watch2(x,y) cout<<#x<<" = "<<x<<" "<<#y<<" = "<<y <<endl
#define watch3(x,y,z) cout<<#x<<" = "<<x<<" "<<#y<<" = "<<y <<" "<<#z<<" = "<<z<<endl


///input
#define input(a) scanf("%d",&a);
#define input2(a,b) scanf("%d %d",&a,&b);
#define input3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define inputll(a) scanf("%lld",&a);
#define inputll2(a,b) scanf("%lld %lld",&a,&b);
#define inputll3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);


///File shortcut
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


///program starts...........

#define MAXN 1000005
#define K 20

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
    faster_io;

    int t=1;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        cin>>N;
        for(int i=0; i<N; i++)
        {
            cin>>arr[i];
        }

        process_rmq();

        vector<int>sufmax(N+1,INT_MIN);
        vector<int>premax(N+1,INT_MIN);

        premax[0]=arr[0];


        for(int i=1; i<N; i++)
        {
            premax[i]=max(premax[i-1],arr[i]);
        }

        for(int i=N-1; i>=0; i--)
        {
            sufmax[i]=max(sufmax[i+1],arr[i]);
        }


        bool ok=false;
        int A=0,B=0,C=0;
        for(int b=N-1; b>=2; b--)
        {
            int mx = sufmax[b];

            auto it = lower_bound(premax.begin(),premax.begin()+b,mx);
            auto it2 = upper_bound(premax.begin(),premax.begin()+b,mx);

            int start = (it-premax.begin());
            int End = (it2-premax.begin()) - 1;
            if(start >= b - 1) continue;


            int hi = End;
            int lo = start;

            if(lo > hi) continue;

            while(lo <= hi)
            {
                int mid = (lo + hi)/2;

                int L = mid + 1;
                int R = b - 1;


                int j = Log[R - L + 1];
                int Min = min(st[L][j], st[R - (1 << j) + 1][j]);


                if(Min == mx)
                {
                    ok=true;

                    A = L;
                    B = b - A;
                    C = N - (A+B);

                    break;
                }
                else if(Min<mx)
                {
                    lo = mid+1;
                }
                else hi = mid - 1;

            }
            if(ok)
            {
                break;
            }




        }
        if(ok)
        {
            cout<<"YES"<<endl;
            cout<<A<<" "<<B<<" "<<C<<endl;
        }
        else cout<<"NO"<<endl;



    }
    return 0;
}
