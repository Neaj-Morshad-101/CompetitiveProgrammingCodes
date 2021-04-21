#include<bits/stdc++.h>
using namespace std;


///typedef
typedef long long ll;
typedef pair<int, int> pii;

///define constant
const ll mxn = 200009;
const int mod = 1000000007;//1e9+7;

///faster io
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///debug
#define watch(x) cerr << __LINE__ << " says: " << #x << " = " << x << "\n"
#define watch2(x,y) cout<< __LINE__ << " says: " <<#x<<" = "<<x<<" "<<#y<<" = "<<y <<endl
#define watch3(x,y,z) cout<< __LINE__ << " says: " <<#x<<" = "<<x<<" "<<#y<<" = "<<y <<" "<<#z<<" = "<<z<<endl


///program starts...........


int n, d;
ll arr[mxn+2];

ll tree[4*mxn]; // for N size arary segment tree contains 2N-1 nodes if N is a power of 2. so max size will be 4*N (we need to make N a power of 2)

//Merge complexity will be multiplied by each of the complexity of build, update and query
ll Merge(ll a, ll b)
{
    return max(a,b); /// *** may change depending on the problem...
}

//O(N*log(N))
void build(int node, int b, int e) //current node and node's range (begin to end)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }

    int mid = (b+e)/2;
    int left = 2*node;
    int right = left + 1;

    build(left, b, mid);
    build(right, mid+1, e);

    tree[node] = Merge(tree[left], tree[right]);
}

//O(4*log(N))     at most four nodes are visited in the segment tree.
ll query(int node, int b, int e, int l, int r) //current node and node's range (begin to end) and query range (l to r)
{
    if(l<=b and e<=r)
    {
        return tree[node];
    }
    if(b>r or e<l)
    {
        return INT_MIN; /// *** may change depending on the problem...
    }

    int mid = (b+e)/2;
    int left = 2*node;
    int right = left + 1;

    ll x = query(left, b, mid, l, r);
    ll y = query(right, mid +1, e, l, r);

    return Merge(x,y);

}

//O(log(N))
void update(int node, int b, int e, int i, ll val) // current node and node's range (begin to end) and update on index i with value val ( arr[i] = val )
{
    if(i>e || i<b) return;
    if(b==e){
        tree[node] = val; /// *** may change depending on the problem...
        return;
    }
    ll mid=(b+e)/2;
    ll left=node*2;
    ll right=left+1;

    update(left,b,mid,i,val);
    update(right,mid+1,e,i,val);


    tree[node]=Merge(tree[left],tree[right]);
}


void solve_case(int tc)
{
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i];

    build(1, 1, n); ///*** 1 indexed

    int q;
    cin>>q;
    while(q--)
    {
        int type;
        cin>>type;

        if(type==1) //update
        {
            int idx, val;
            cin>>idx>>val;
            update(1, 1, n, idx, val);
        }
        else if(type==2) //query
        {
            int l, r;
            cin>>l>>r;

            int ans = query(1, 1, n, l, r);

            cout<<ans<<endl;
        }


    }

    return;
}

int main()
{
    faster_io;
    int test_case=1;
    cin>>test_case;
    for(int tc=1 ; tc<=test_case; tc++)
    {
        solve_case(tc);
    }

    return 0;
}
