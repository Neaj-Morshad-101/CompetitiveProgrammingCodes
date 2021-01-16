#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a,b,c;
    while(n--)
    {
        cin>>a>>b>>c;
        if(abs(a-c)<abs(b-c))
        {

            cout<<"Cat A"<<endl;
        }
        else if(abs(a-c)>abs(b-c))
            cout<<"Cat B"<<endl;
        else cout<<"Mouse C"<<endl;
    }
    return 0;
}
