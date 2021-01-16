#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        int n,m;
        cin>>n>>m;
        deque<int>dq;
        cout<<"Case "<<tc<<":"<<endl;
        while(m--)
        {
            string s;
            int x;
            cin>>s;
            if(s=="pushLeft")
            {
                cin>>x;
                if(dq.size()==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    dq.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
            }
            else if(s=="pushRight")
            {
                cin>>x;
                if(dq.size()==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    dq.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
            }
            else if(s=="popRight")
            {
                if(dq.size()==0)
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    x = dq.back();
                    dq.pop_back();
                    cout<<"Popped from right: "<<x<<endl;
                }
            }
            else
            {
                if(dq.size()==0)
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    x = dq.front();
                    dq.pop_front();
                    cout<<"Popped from left: "<<x<<endl;
                }
            }

        }
    }
}
