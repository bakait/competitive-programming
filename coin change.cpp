#include<bits/stdc++.h>
#define f0(i,n) for (int i=0;i<n;i++)
#define f1(i,n) for (int i=1;i<=n;i++)
using namespace std;

int table [100][100];


int coin_change(int s[],int m,int n)
{
    f0(i,100) {table[0][i]=0;table[i][0]=1;}
// f1(i,m) printf("%d",s[i]);
    printf("\n");
    f1(i,m)
    {
        f1(j,n)
      {
           if (s[i]<=j)   table[i][j]=table[i-1][j]+table[i][j-s[i]];
          else table[i][j]=table[i-1][j];

          printf("(%d,%d):%d=%d+%d i:%d j-s[i]:%d j:%d s[i]:%d\n",i,j,table[i][j],table[i-1][j],table[i][j-s[i]],i,j-s[i],j,s[i]);

      }
          printf("=================================================================\n");

    }

    return(table[m][n]);
//return 1;
}

int main()
{
    int t ,m,n,s[300];
    printf("No of test cases:");
    scanf("%d",&t);



    f1(c,t)
    {
        printf ("test case :%d \n",c);
         printf("No of coin denomination:");
         scanf("%d",&m);
         printf("Value:");

         scanf ("%d",&n);

        printf("enter coin denominatios:\n");
        f1(i,m) scanf("%d",&s[i]);

        printf("Printing result:%d",coin_change(s,m,n));

    }





}
