#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    double s,area;
    vector<pair<double,int>>v;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        s = (double(a[i]+b[i]+c[i])/double(2.0));
        area = sqrt(s*(s-a[i])*(s-b[i])*(s-c[i]));
        v.push_back(make_pair(area,i));
    }
    sort(v.begin(),v.end());
    int index;
    for(int i=0;i<n;i++)
    {
        index=v[i].second;
        printf("%d %d %d\n",a[index],b[index],c[index]);
    }

    return 0;

}
