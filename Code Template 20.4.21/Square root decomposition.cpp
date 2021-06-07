#include <bits/stdc++.h>
using namespace std;
int b[100]; // array for storing result for each block.  block size = sqrt(n);
///Range query and range update is possible in O(sqrt(n)) lazy type implementation... watch ash vai class 22 

///O(n)
int precalculate(int a[],int n)
{
    int segment_size=sqrt(n);
    int current_segment=-1; //Block Index
    for(int i=0; i<n; i++)
    {
        if(i%segment_size==0)
        {
            ++current_segment; //
        }
        b[current_segment]+=a[i];
        
        /// b[i/segment_size] += a[i]; Only this line is enough.
    }
    return segment_size;
}

///O(sqrt(n))
int query(int l,int r,int a[],int n)
{
    int segment_size=sqrt(n);
    int sum=0;


    //First Part partially overlapped
    while(l<r&&l%segment_size!=0)
    {
        sum+=a[l];
        ++l;
    }
    // Second Part Fully overlapped
    while(l+segment_size<=r)
    {
        sum+=b[l/segment_size];
        l+=segment_size;
    }
    //Third part partially overlapped
    while(l<=r)
    {
        sum+=a[l];
        l++;
    }
    return sum;
}

///O(1)
void update(int a[], int n, int i, int val)
{
    int segment_size=sqrt(n);
    int segment_no = i / segment_size;
    b[segment_no] -= a[i];
    b[segment_no] += val;
    a[i] = val;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    precalculate(a,n);
    cout<<query(0,4,a,n)<<endl;
}
