#include<bits/stdc++.h>

using namespace std;
#define f0(i,n) for(int i=0;i<n;i++);
#define f1(i,n) for (int i=1;i<=n;i++);

bool check(int b[4][4],int x, int y)
{
    int i, j;
    for (i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if ((b[i][j]==1)&&((x==i)||(y==j)||(abs(x-i)=abs(y-i))))
                return false;
        }
    }

    return true;
}

void solve(int b[4][4],x,y);
{
    b[x][y]=1;
    for(int i=0;i<4;i++)
    {
        if (i==x) continue;
        for(int j=0;j<4;j++)
        {  if (j==y) continue;
            if(check(b,i,j))
            {
                 b[i][j]=1;
                 solve(b,)
            }
        }
    }


}


int main()
{

    int b[4][4];

    memset(b,0,sizeof(b[0][0])*16);
    for (int i=0;i<4;i++)
    {
        printf("\n");
        for (int j=0;j<4;j++)
        {
            printf("%d\t",b[i][j]);
        }
    }




//    f0(i,4){f0(j,4)printf("%d\t",b[i][j]);printf("\n");}





}
