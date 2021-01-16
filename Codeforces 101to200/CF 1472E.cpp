#include<bits/stdc++.h>
using namespace std;
#define dd double
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
//#define int long long
//#define uint unsigned long long
#define ld long double
#define mx 200005
#define mod 1000000007
#define fr first
#define cti(a) (a-48)
#define itc(a) char(a+48)
#define se second
#define End cout<<"\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define memo(Array,val) memset(Array, val, sizeof Array)
#define PI acos(-1)
bool check(int n, int pos){ return (n&(1<<pos)); }
bool Set(int n, int pos) {  return (n | (1<<pos)); }
ld LOG(ld b, ld e){ return log(b)/log(e); }

struct hello
{
    int vv, idx;

}tree[3*mx];



hello Merge(hello lft, hello rgt)
{
    hello take;
    if(lft.vv <= rgt.vv){
        take = {lft.vv, lft.idx};
    }
    else{
        take = {rgt.vv, rgt.idx};
    }

    return take;
}

void update(int node, int b, int e, int i, int val)
{
    if(i>e || i<b)return;
    if(b>=i && e<=i){
        tree[node]={val, i};
        return;
    }
    int mid=(b+e)/2;
    int left=node*2;
    int right=left+1;
    update(left,b,mid,i,val);
    update(right,mid+1,e,i,val);
    tree[node]=Merge(tree[left],tree[right]);
}

hello Query(int node, int b, int e, int i, int j)
{

    if(i>e || j<b){

        hello dummy;
        dummy = {1000000009, i};
        return dummy;
    }
    if(b>=i && e<=j)return tree[node];

    int mid=(b+e)/2;
    int left=node*2;
    int right=left+1;
    hello p=Query(left,b,mid,i,j);
    hello q=Query(right,mid+1,e,i,j);
    return Merge(p,q);
}

void clr() { memo(tree, 0); }

void solve(int kk)
{
    clr();
    int n,q;
    int n1, n2;

    cin >> n;
    pair <int, int> p1[n+5], p2[n+5];
    map < pair<int, int>, int > mp, ans;
    vector <int> v2;
    for(int i=1; i<=n; i++){
        cin >> n1 >> n2;
        if(n1>n2)
            swap(n1, n2);
        p1[i] = {n1, n2};
        p2[i] = {n1, n2};
        //v.push_back(n2);
        v2.push_back(n1);
        mp[{n1, n2}] = i;
    }
   // v.push_back(-1);
    //v2.push_back(-1);
    sort(p1+1, p1+n+1);
    sort(v2.begin(), v2.end());

    //p1[0] = {-1, -1};

    for(int i=1; i<=n; i++){
        update(1, 1, n, i, p1[i].second);
    }

    for(int i=1; i<=n; i++){
        int a1 = p1[i].first, a2 = p1[i].second;

        auto it = upper_bound(v2.begin(), v2.end(), a1-1)-v2.begin();
        //--it;

        int pos = (int)it;

        hello mm = Query(1, 1, n, 1, pos);

        if(a2>mm.vv && v2[it-1]<a1){
            int val1 = p1[mm.idx].first, val2 = p1[mm.idx].second;

            ans[{a1,a2}] = mp[{val1, val2}];

        }
        else
            ans[{a1, a2}] = -1;

    }


    for(int i=1; i<=n; i++){
        int val1 = p2[i].first, val2 = p2[i].second;

        cout << ans[{val1, val2}] << " ";
    }




    cout << "\n";


}

int main()
{
   fast;
   int t=1,kk=0;
   cin >> t;
   while(++kk<=t) solve(kk);

   return 0;
}
