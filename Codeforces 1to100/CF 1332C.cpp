#include<bits/stdc++.h>
using namespace std;

///debug
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"
#define watch2(x,y) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl
#define watch3(x,y,z) cout<<#x<<" = "<<x<<endl<<#y<<" = "<<y <<endl<<#z<<" = "<<z<<endl

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int par=n/k;
        if(par&1)
        {
            k=(n/k)*2;
            int ans=0;
            cout<<"odd seg"<<endl;
            watch(k);

            for(int i=0; i<n/k; i++)
            {
                int cnt[26]= {0};
                for(int j=i; j<n; j+=k)
                {
                    cnt[s[j]-'a']++;
                }
                int mx=-1;
                for(int j=0; j<26; j++)
                {
                    if(cnt[j]>mx)
                        mx=cnt[j];
                }
                ans+=(n/k)-mx;
            }
            cout<<ans<<endl;


        }
        else
        {

            int ans=0;
            for(int i=0; i<n/k; i++)
            {
                int cnt[26]= {0};
                for(int j=i; j<n; j+=k)
                {
                    cnt[s[j]-'a']++;
                }
                int mx=-1;
                for(int j=0; j<26; j++)
                {
                    if(cnt[j]>mx)
                        mx=cnt[j];
                }
                ans+=(n/k)-mx;
            }
            cout<<ans<<endl;
        }


    }
}
