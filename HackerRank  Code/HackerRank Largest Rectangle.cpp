#include<iostream>
#include<stack>
using namespace std;

#define ll long long int

int main()
{
    ll maxArea = 0,top,area,n,i;
    cin>>n;
    ll height[n];

    for(int i=0; i<n; i++)
        cin>>height[i];

    stack<ll> s;

    for(i=0; i<n;)
    {

        if (s.empty() || height[s.top()] <= height[i])
        {
            s.push(i);
            i++;
        }
        else
        {
            top = s.top();
            s.pop();
            if(s.empty())
            {
                area = height[top]*i;
            }
            else
                area = height[top]*(i-s.top()-1);
            maxArea=max(area,maxArea);
        }
    }
    while (!s.empty())
    {
        top = s.top();
        s.pop();
        if(s.empty())
        {
            area = height[top]*i;
        }
        else
            area = height[top]*(i-s.top()-1);
        maxArea=max(area,maxArea);
    }

    cout<<maxArea<<endl;
    return 0;
}
