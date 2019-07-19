#include<bits/stdc++.h>
using namespace std;

int l[100][100];


int main()
{
   int n=101,c[]={1,50},nc[10][200];
   memset(nc,0,sizeof(nc[0][0])*10*200);
   int k=sizeof(c)/sizeof(c[0]);

   for (int i=1;i<=k;i++)
   {
       for(int j=1;j<=n;j++)
       {
               if (c[i-1]==j) nc[i][j]=1+nc[i-1][j];
               else if (c[i-1]>j) nc[i][j]=nc[i-1][j];
               else nc[i][j]=nc[i][j-c[i-1]]+nc[i-1][j];
        }
    }
//    cout<<"Printing elements in array nc:"<<endl;
//    for(int i=0;i<=k;i++) {for (int j=0;j<=n;j++){ cout<<nc[i][j]<<"("<<i<<","<<j<<")"<<'\t';} cout<<endl; }

    printf("\nNo of ways %d can produced: %d",n,nc[k][n]);


}
