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
const ll mxn = 100005;
const int mod = 1000000007;//1e9+7;

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
#define inputll3(a,b,c) inputll2(a,b) inputll(c)

///File shortcut
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


///program starts...........


string s;
int n;
vector<int>v[mxn];
void process(int i)
{

    if(i+1<n)
    {
        if(s[i]==s[i+1])
        {
            v[i].push_back(i+1);
        }
    }
    if(i+2<n)
    {
        if(s[i]==s[i+2])
        {
            v[i].push_back(i+2);
        }
    }

    if(i-1>=0)
    {
        if(s[i]==s[i-1])
        {
            v[i].push_back(i-1);
        }
    }
    if(i-2>=0)
    {
        if(s[i]==s[i-2])
        {
            v[i].push_back(i-2);
        }
    }
}

int main()
{
    faster_io;

    int t=1;
    cin>>t;
    for(int tc=1 ; tc<=t; tc++)
    {
        cin>>s;

        n = s.size();

        for(int i=0; i<n; i++)
        {
            process(i);
        }

//        for(int i=0; i<n; i++)
//        {
//            cout<<v[i].size()<<" ";
//        }
//        cout<<endl;

        int cnt = 0;
        int ans = mxn+100;

        /// one

        for(int c = 4; c >= 1; c--)
        {
            for(int i=0; i<n; i++)
            {
                if(i%3==0) continue;
                if(v[i].size()==c)
                {
                    //watch(c);
                    for(char ch = 'a'; ch<='z'; ch++)
                    {
                        if(ch==s[i]) continue;
                        if(i+1<n)
                        {
                            if(ch==s[i+1])
                            {
                                continue;
                            }
                        }
                        if(i+2<n)
                        {
                            if(ch==s[i+2])
                            {
                                continue;
                            }
                        }

                        if(i-1>=0)
                        {
                            if(ch==s[i-1])
                            {
                                continue;
                            }
                        }
                        if(i-2>=0)
                        {
                            if(ch==s[i-2])
                            {
                                continue;
                            }
                        }

                        s[i]=ch;
                        cnt++;
                        v[i].clear();

                        if(i+1<n)
                        {
                            v[i+1].clear();
                            process(i+1);
                        }
                        if(i+2<n)
                        {
                            v[i+2].clear();
                            process(i+2);
                        }

                        if(i-1>=0)
                        {
                            v[i-1].clear();
                            process(i-1);
                        }
                        if(i-2>=0)
                        {
                            v[i-2].clear();
                            process(i-2);
                        }


//                        watch(cnt);
//                        cout<<s<<endl;
//                        for(int i=0; i<n; i++)
//                        {
//                            cout<<v[i].size()<<" ";
//                        }
//                        cout<<endl;
                        break;
                    }
                }
            }
        }
//        cout<<"ans"<<endl;
//        cout<<cnt<<endl;

        ans = min(cnt,ans);

        /// two


        for(int c = 4; c >= 1; c--)
        {
            for(int i=0; i<n; i++)
            {
                if(i%3==1) continue;
                if(v[i].size()==c)
                {
                    //watch(c);
                    for(char ch = 'a'; ch<='z'; ch++)
                    {
                        if(ch==s[i]) continue;
                        if(i+1<n)
                        {
                            if(ch==s[i+1])
                            {
                                continue;
                            }
                        }
                        if(i+2<n)
                        {
                            if(ch==s[i+2])
                            {
                                continue;
                            }
                        }

                        if(i-1>=0)
                        {
                            if(ch==s[i-1])
                            {
                                continue;
                            }
                        }
                        if(i-2>=0)
                        {
                            if(ch==s[i-2])
                            {
                                continue;
                            }
                        }

                        s[i]=ch;
                        cnt++;
                        v[i].clear();

                        if(i+1<n)
                        {
                            v[i+1].clear();
                            process(i+1);
                        }
                        if(i+2<n)
                        {
                            v[i+2].clear();
                            process(i+2);
                        }

                        if(i-1>=0)
                        {
                            v[i-1].clear();
                            process(i-1);
                        }
                        if(i-2>=0)
                        {
                            v[i-2].clear();
                            process(i-2);
                        }


//                        watch(cnt);
//                        cout<<s<<endl;
//                        for(int i=0; i<n; i++)
//                        {
//                            cout<<v[i].size()<<" ";
//                        }
//                        cout<<endl;
                        break;
                    }
                }
            }
        }
//        cout<<"ans"<<endl;
//        cout<<cnt<<endl;

        ans = min(cnt,ans);

        ///three

        for(int c = 4; c >= 1; c--)
        {
            for(int i=0; i<n; i++)
            {
                if(i%3==2) continue;
                if(v[i].size()==c)
                {
                    //watch(c);
                    for(char ch = 'a'; ch<='z'; ch++)
                    {
                        if(ch==s[i]) continue;
                        if(i+1<n)
                        {
                            if(ch==s[i+1])
                            {
                                continue;
                            }
                        }
                        if(i+2<n)
                        {
                            if(ch==s[i+2])
                            {
                                continue;
                            }
                        }

                        if(i-1>=0)
                        {
                            if(ch==s[i-1])
                            {
                                continue;
                            }
                        }
                        if(i-2>=0)
                        {
                            if(ch==s[i-2])
                            {
                                continue;
                            }
                        }

                        s[i]=ch;
                        cnt++;
                        v[i].clear();

                        if(i+1<n)
                        {
                            v[i+1].clear();
                            process(i+1);
                        }
                        if(i+2<n)
                        {
                            v[i+2].clear();
                            process(i+2);
                        }

                        if(i-1>=0)
                        {
                            v[i-1].clear();
                            process(i-1);
                        }
                        if(i-2>=0)
                        {
                            v[i-2].clear();
                            process(i-2);
                        }


//                        watch(cnt);
//                        cout<<s<<endl;
//                        for(int i=0; i<n; i++)
//                        {
//                            cout<<v[i].size()<<" ";
//                        }
//                        cout<<endl;
                        break;
                    }
                }
            }
        }
//        cout<<"ans"<<endl;
//        cout<<cnt<<endl;

        ans = min(cnt,ans);

        cout<<ans<<endl;




    }
//  KeyPoint
//  change 4 position , work only 2,3 len string .
//
//
    return 0;
}

