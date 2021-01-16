#include<bits/stdc++.h>
using namespace std;

int row,col;
char grid[21][21];

bool valid(int r,int c)
{
    if(r>=row || c>=col || r<0 || c<0 )
        return false;
    return true;
}

void dfs(int r,int c)
{
    if(valid(r,c)==false)
        return;
    if(grid[r][c]=='#')
        return;
    grid[r][c]='@';
    if(grid[r][c+1]!='@' && valid(r,c+1) )
        dfs(r,c+1);
    if(grid[r-1][c]!='@' && valid(r-1,c))
        dfs(r-1,c);
    if(grid[r][c-1]!='@'  && valid(r,c-1))
        dfs(r,c-1);
    if(grid[r+1][c]!='@' && valid(r+1,c))
        dfs(r+1,c);
}

int main()
{
    int t,initial_row,initial_col;
    scanf("%d",&t);
    for(int tc =1; tc<=t; tc++)
    {
        scanf("%d %d",&col,&row);

        for(int r=0; r<row; r++)
        {
            for(int c=0; c<col; c++)
            {
                getchar();
                scanf("%c",&grid[r][c]);
                if(grid[r][c]=='@')
                {
                    initial_row=r;
                    initial_col=c;
                }
            }
        }
        dfs(initial_row,initial_col);
        int accessible=0;
        for(int r=0; r<row; r++)
        {
            for(int c=0; c<col; c++)
            {
                if(grid[r][c]=='@')
                {
                    accessible++;
                }
            }
        }
        printf("Case %d: %d\n",tc,accessible);
    }
    return 0;
}
