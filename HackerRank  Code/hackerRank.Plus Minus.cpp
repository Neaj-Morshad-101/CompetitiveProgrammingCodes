#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int p=0,N=0,z=0,x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>0) p++;
        else if(x<0) N++;
        else z++;
    }
    cout<<(double)p/n<<endl;
    cout<<(double)N/n<<endl;
    cout<<(double)z/n<<endl;
    return 0;
}

