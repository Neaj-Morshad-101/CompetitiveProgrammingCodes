#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int faces= 0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="Icosahedron")
        {
            faces+=20;
        }
        else if(s == "Cube")
        {
            faces+=6;
        }
        else if(s == "Tetrahedron")
        {
            faces+=4;

        }

        else if(s == "Dodecahedron")
        {
            faces+=12;

        }
        else if(s=="Octahedron")
        {
            faces+=8;
        }
    }

    cout<<faces<<endl;
    return 0;
}
