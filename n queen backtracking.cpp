#include<bits/stdc++.h>
using namespace std;

#define f0(i,n) for( i=0;i<n;i++)


struct position
{
    int x,y;
};


bool check_position(int b[4][4],int x, int y)
{
    int i ,j;
//    cout<<b[i][j];
    f0(j,4) if (b[x][j]||b[j][y]) return false;
    int m=x,n=y;
    while (m<3&&n<3){m++;n++;if (b[m][n]) return false; }
    while (m>0&&n>0){m--;n--;if (b[m][n]) return false; }
    while (m>0&&n<3){m--;n++;if (b[m][n]) return false; }
    while (m<3&&n>0){m++;n--;if (b[m][n]) return false; }
    return true;


}


int main()
{
    int board[4][4],i,j;
    stack<position> s;
    memset(board,0,sizeof(board[0][0])*16);
//    f0(i,4){f0(j,4) board[i][j]=0;}



    board[2][3]=1;
        f0(i,4){f0(j,4) cout<<board[i][j]<<'\t'; cout<<endl;}

    if (check_position(board,0,1)) cout<<endl<<"safe";
        else cout<<endl<<"unsafe";


     return 0;



}
