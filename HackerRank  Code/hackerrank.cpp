#include<bits/stdc++.h>
using namespace std;

int main()
{
      ios::sync_with_stdio(false);
      cin.tie(0);
      int n;
      cin>>n;
//      for(int i=1;i<=n;i++)
//      {
//          for(int j=i-1;j>=1;j--)
//          {
//              printf(" ");
//          }
//          for(int j=n-i+1;j>=1;j--)
//          {
//              cout<<"#";
//          }
//          cout<<endl;
//      }
      for(int i=1;i<=n;i++)
      {
          for(int j=n;j>i;j--)
          {
              printf(" ");
          }
          for(int j=1;j<=i;j++)
          {
              cout<<"#";
          }
          cout<<endl;
      }
      return 0;
}


