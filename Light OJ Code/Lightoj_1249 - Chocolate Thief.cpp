#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,s;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>s;
        getchar();
        char name[s][21];
        int length[s],width[s],height[s],v[s];
        int j,k,max_loc, min_loc;
        for(j=0; j<s; j++)
        {
            cin>>name[j];
            //cout<<name[j];
            cin>>length[j]>>width[j]>>height[j];
            //cout<<length[j]<<" "<<width[j]<<" "<<height[j]<<endl;
            v[j]=length[j]*width[j]*height[j];
        }
        int same = v[0];
        for(j=1;j<s;j++)
        {
            if(same != v[j])
                break;
        }
        if(j==s) printf("Case %d: no thief\n",i);
        else
        {
            int Max=v[0];
            max_loc=0;
            min_loc=0;
            int Min=v[0];
            for(k=0;k<s;k++)
            {
                if(Max<v[k])
                {
                    Max=v[k];
                    max_loc=k;
                }
                //Max=max(Max,v[k]);
                if(Min>v[k])
                {
                    Min=v[k];
                    min_loc=k;
                }
                //Min=min(Min,v[k]);
            }
            printf("Case %d: %s took chocolate from %s\n",i,name[max_loc],name[min_loc]);
        }

    }
}

