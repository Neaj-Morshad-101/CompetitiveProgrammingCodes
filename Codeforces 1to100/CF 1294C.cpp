#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> factors(ll n)
{
    vector<ll> f;
    for (ll x = 2; x*x <= n; x++)
    {
        if(n%x == 0)
        {
            f.push_back(x);
            while(n%x==0)
                n /= x;
        }
    }
    if (n > 1)
        f.push_back(n);
    return f;
}


int main()
{

    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<ll>pf;
        pf=factors(n);
//        cout<<"Prime factorization" <<endl;
//        for(ll i=0; i<pf.size(); i++)
//        {
//            cout<<pf[i]<<" ";
//        }
        //cout<<endl;
        if(pf.size()>=3)
        {
            ll N=n;
            cout<<"YES"<<endl;
            ///cout<<pf[0]<<" "<<pf[1]<<" ";
            ll pro1 = 1LL;
            int cnt[2]= {0};
            for(ll i=0; i<2; i++)
            {
                while(n%pf[i]==0)
                {
                    cnt[i]++;
                    n/=pf[i];
                }
            }
            for(int i=0; i<cnt[0]; i++)
            {
                pro1*=pf[0];
            }
            cout<<pro1<<" ";
            ll pro2 = 1LL;
            for(int i=0; i<cnt[1]; i++)
            {
                pro2*=pf[1];
            }
            cout<<pro2<<" ";


            cout<<N/(pro1*pro2)<<endl;
        }
        else if(pf.size()==2)
        {
            ///cout<<"hi"<<endl;
            ll cnt[2]= {0};
            //cout<<cnt[0]<<" "<<cnt[1]<<endl;
//            cout<<pf[0]<<" "<<pf[1]<<endl;

            for(ll i=0; i<2; i++)
            {
                while(n%pf[i]==0)
                {
                    cnt[i]++;
                    n/=pf[i];
                }
            }
            //cout<<cnt[0]<<" "<<cnt[1]<<endl;
            ll minIndex=0;
            if(cnt[0]>=cnt[1])
            {
                swap(cnt[0],cnt[1]);
                minIndex=1;
            }
//            cout<<"cnt value"<<endl;
//            cout<<cnt[0]<<" "<<cnt[1]<<endl;
//            cout<<"minIndex : "<<minIndex<<endl;

            ll numcnt=0;
            int okay1=0;
            int okay2=0;
            int  okay3=0;
//            for(ll i=0; i<2; i++)
//            {
//                if(cnt[i]>=6)
//                    numcnt+=3;
//                else if(cnt[i]>=3)
//                    numcnt+=2;
//                else
//                    numcnt+=1;
//
//                if(numcnt>=3)
//                {
//                    okay=true;
//                    break;
//                }
//            }
            //cout<<"cnt value"<<endl;
            //cout<<cnt[0]<<" "<<cnt[1]<<endl;
            ll a=cnt[0],b=cnt[1];
            //cout<<" a b " <<a<< " "<<b<<endl;
            if(a>=6)
            {
                okay1=1;
                //cout<<"hi"<<__LINE__<<endl;
            }
            if((a>=2 && b>=2))
            {
                okay2=1;
                //cout<<"hi hi hi "<<__LINE__<<endl;

            }
            if((a>=1 && b>=3))
                okay3=1;

            bool okay=okay1|| okay2|| okay3;
//            cout<<"okay1 : "<<okay1<<endl;
//            cout<<"okay2 : "<<okay2<<endl;
//            cout<<"okay3 : "<<okay3<<endl;
            if(okay)
            {
                cout<<"YES"<<endl;
                if(cnt[0]>=3)
                {
                    cout<<pf[minIndex]<<" "<<pf[minIndex]*pf[minIndex]<<" ";
                    ll pro=1;
                    for(ll i=3; i<cnt[0]; i++)
                    {
                        pro*=pf[minIndex];
                    }
                    for(ll i=0; i<cnt[1]; i++)
                    {
                        pro*=pf[1-minIndex];
                    }
                    cout<<pro<<endl;
                }
                else if((cnt[0]>=2 && cnt[1]>=2))
                {
                    //cout<<"Hi from " <<__LINE__<<endl;
                    cout<<pf[minIndex]<<" "<<pf[1-minIndex]<<" ";
                    ll pro=1LL;
                    for(ll i=1; i<cnt[0]; i++)
                    {
                        pro*=pf[minIndex];
                    }
                    for(ll i=1; i<cnt[1]; i++)
                    {
                        pro*=pf[1-minIndex];
                    }
                    cout<<pro<<endl;

                }
                else if(cnt[0]>=1)
                {
                    ll pro=1LL;
                    for(ll i=0; i<cnt[0]; i++)
                    {
                        pro*=pf[minIndex];
                    }
                    cout<<pro<<" ";

                    cout<<pf[1-minIndex]<<" ";
                    pro=1LL;
                    for(ll i=1; i<cnt[1]; i++)
                    {
                        pro*=pf[1-minIndex];
                    }
                    cout<<pro<<endl;
                }
            }
            else
            {
                //cout<<"Hi from " <<__LINE__<<endl;
                cout<<"NO"<<endl;

            }
        }
        else
        {
            ll cnt=0;
            while(n%pf[0]==0)
            {
                cnt++;
                n/=pf[0];
            }
            if(cnt>=6)
            {
                cout<<"YES"<<endl;
                cout<<pf[0]<<" "<<pf[0]*pf[0]<<" ";
                ll pro=1;
                for(ll i=3; i<cnt; i++)
                {
                    pro*=pf[0];
                }
                cout<<pro<<endl;
            }
            else
                cout<<"NO"<<endl;
        }

    }
    return 0;
}

