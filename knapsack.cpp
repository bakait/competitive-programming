#include<bits/stdc++.h>
using namespace std;


int main()
{
  int wt, w[2000],v[2000],n,k[100][100],i,j;

    memset(k,0,sizeof(k[0][0])*100*100);

    cout<<"Enter Capacity :";
    cin>>wt;
    cout<<"Enter no of items :";
    cin>>n;
    cout<<"Enter size and value of each item:";

     for(int m=1;m<=n;m++)
    {
        cin>>w[m]>>v[m];
    }

    cout<<"W "<<" "<<"V  "<<endl;
     for (int m=1;m<=n;m++)
     {
         cout<<w[m]<<" "<<v[m]<<endl;
     }

    for( i=1;i<=n;i++)
    {
        for ( j=1;j<=wt;j++)
        {
            if (w[i]>j) k[i][j]=k[i-1][j];
            else   k[i][j]=max(k[i-1][j],k[i-1][j-w[i]]+v[i]);
//             printf("Value of k[%d][%d] : %d\n",i,j,k[i][j]);
             printf("k[%d][%d]:%d\t",i,j,k[i][j]);
        }
        printf("\n");
    }

    printf("value of i:%d and j:%d",)
    cout<<"Result: "<<k[i][j];



}
