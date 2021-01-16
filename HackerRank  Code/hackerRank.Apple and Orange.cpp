#include<bits/stdc++.h>
using namespace std;

int main()
{
    int appleLocation,OrangeLocation;
    int LeftHome,RightHome,Apples,Oranges,x;
    int appleCount=0,orangeCount=0;
    cin>>LeftHome>>RightHome;
    cin>>appleLocation>>OrangeLocation;
    cin>>Apples>>Oranges;
    for(int i=0;i<Apples;i++)
    {
        cin>>x;
        if(appleLocation+x>=LeftHome && appleLocation+x<=RightHome)
            appleCount++;
    }
    for(int i=0;i<Oranges;i++)
    {
        cin>>x;
        if(OrangeLocation+x>=LeftHome && OrangeLocation+x<=RightHome)
            orangeCount++;
    }
    cout<<appleCount<<endl;
    cout<<orangeCount<<endl;
}
