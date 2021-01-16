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

///faster io
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///debug
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"
#define watch2(x,y) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl
#define watch3(x,y,z) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl<<#z<<" = "<<z<<endl


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

bool sortByVal(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    faster_io;

    int t=1;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        /// CASE ALL LLLLLLLLLLLLLLL

        bool win =false;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='W')
            {
                win=true;
                break;
            }
        }
        if(!win)
        {
            int r = min(k,n);
            int ans = r*2-1;
            if(ans<0) ans=0;
            cout<<ans<<endl;
            continue;
        }

        /// CASE WLW inserting index into the Q

        queue<int>q;

        for(int i=1; i<n-1; i++)
        {
            if(s[i]=='L')
            {
                if(s[i-1]=='W' and s[i+1]=='W') q.push(i);
            }
        }

        while(!q.empty() and k)
        {
            int x= q.front();
            q.pop();
            s[x]='W';
            k--;
        }


        ///CASE WL or LW with gap filling priority , inserting index into map.
        map<int,int>mp;
        map<int,int>::iterator it;

        int prev_index=-1;
        int i,gap=0;
        int first_index=-1, last_index=-1;
        for(i=0; i<n; i++)
        {
            if(s[i]=='L')
            {
                gap++;
            }
            else ///W
            {
                if(prev_index == -1)
                {
                    if(i==0)
                    {
                        prev_index=i;
                        gap=0;
                    }
                    else
                    {
                        first_index=i;
                        prev_index=i;
                        gap=0;
                    }
                }
                else
                {
                    for(int k=prev_index+1; k<i; k++)
                    {
                        mp.insert({k,gap});
                    }

                    prev_index=i;
                    gap=0;
                }
            }
        }
        if(gap or prev_index!=n-1)
        {
            last_index=prev_index;
        }

        vector<pair<int, int>> vec;

        map<int, int> :: iterator itt2;
        for (itt2=mp.begin(); itt2!=mp.end(); itt2++)
        {
            vec.push_back(make_pair(itt2->first, itt2->second));
        }

        sort(vec.begin(), vec.end(), sortByVal);

        for (int i = 0; i < vec.size(); i++)
        {
            if(k==0) break;

            s[vec[i].first]='W';
            k--;

        }

        if(k>0 and first_index!=-1)
        {
            for(int x=first_index-1; x>=0; x--)
            {
                s[x]='W';
                k--;
                if(k==0) break;

            }
        }

        if(k>0 and last_index!=-1)
        {
            for(int x = last_index+1; x<n; x++)
            {
                s[x]='W';
                k--;
                if(k==0) break;
            }
        }

        bool p_win = false;
        int ans=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='L') p_win=false;
            else
            {
                if(p_win) ans+=2;
                else
                {
                    ans++;
                    p_win=true;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
