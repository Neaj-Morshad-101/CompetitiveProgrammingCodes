#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define ld long double
#define mx 200005
#define fr first
#define se second
#define End cout<<"\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

bool func(string s1, int n)
{
    for(int i=0; i<n; i++){
        if(s1[0]!=s1[i]) return 0;
    }
    return 1;
}

int main()
{
  // fast;
   int sum=0,n;
   int b=0,w=0;
   string s1;
   cin >> n >> s1;
  // n = s1.size();
   vector <int> v;
   bool ok=1;
   for(int i=0; s1[i]!=0; i++){
      if(s1[i] != s1[0]){
        ok=0;
        break;
      }
   }
   if(ok){
     cout << 0 << "\n";
     return 0;
   }
   ok=1;
   for(int i=0; s1[i]!=0; i++){
      if(s1[i] == 'W') w++;
      else b++;
   }
   if((b&1 && w&1)){
      cout << -1 << '\n';
      return 0;
   }
   for(int i=0; i<n-1; i++){
      if(s1[i] == s1[i+1] && s1[i] == 'W'){
         i++;
       //  cout << "ehitw";
      }
      else if(s1[i] == s1[i+1] && s1[i] == 'B'){
         v.pb(i+1),s1[i] = s1[i+1] = 'W', i++;
        // cout << "yeyey";
      }
      else{
        if(s1[i] == 'W' && s1[i+1] == 'B'){
            v.pb(i+1),swap(s1[i],s1[i+1]);
        }
       // cout << "else";
      }
   }

   bool test=0;
   test = func(s1,n);
   if(test){
      /// kaj
      cout << s1 << "\n";
     cout << v.size() << "\n";
   for(auto it : v) cout << it << ' ';
      return 0;
//      continue;
   }

   for(int i=0; i<n-1; i++){
      if(s1[i] == s1[i+1] && s1[i] == 'W'){
         s1[i] = s1[i+1] = 'B';
         v.pb(i+1);
         i++;
      }
   }
   if(s1[n-1] == 'W'){
      for(int i=0; i<n-1; i++){
         v.pb(i+1);
         s1[i]=s1[i+1]='W';
         i++;
      }
   }


   cout << s1 << "\n";
   cout << v.size() << "\n";
   for(auto it : v) cout << it << ' ';
   puts("");
//cout  << n << "\n";


   return 0;
}
