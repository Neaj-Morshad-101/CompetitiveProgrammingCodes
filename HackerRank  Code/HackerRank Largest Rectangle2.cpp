#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll height[n];
    for(ll i=0; i<n; i++)
        cin>>height[i];
    ll maxArea=0,area,topp;
    stack<ll> s;
    ll i;
    for(i=0; i<n;)
    {
       // printf("i : %lld\n",i);
        if (s.empty() || height[s.top()] <= height[i])
        {
            s.push(i);
            i++;
        }
        else
        {
            topp=s.top();
            s.pop();
            if(s.empty())
            {
                area = height[topp]*i;
            }
            else
                area =height[topp]*(i-s.top()-1);

            maxArea=max(maxArea,area);
           // printf("arae : %lld     maxArea : %lld\n",area,maxArea);
        }
    }

    while(!s.empty())
    {
       // printf("i : %lld\n",i);

        topp=s.top();
        s.pop();
        if(s.empty())
        {
            area = height[topp]*i;
        }
        else
            area =height[topp]*(i-s.top()-1);

        maxArea=max(maxArea,area);
        //printf("arae : %lld     maxArea : %lld\n",area,maxArea);

    }


    cout<<maxArea<<endl;



    return 0;
}
