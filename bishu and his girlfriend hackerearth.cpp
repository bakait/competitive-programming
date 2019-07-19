#include<bits/stdc++.h>
using namespace std;



int main()
{
    int g[10][10];
    int n,u,v;
    memset(g,0,sizeof(g));
    cout<<"Size of g:"<<sizeof(g)<<endl;
    printf("Enter no of countries :");
    cin>>n;
//    for (int i=1;i<=n-1;i++)
//    {
//        cin>>u>>v;
//        cout<<"u:"<<u<<"v:"<<v<<endl;
//        g[u][v]=1;
//    }

//     for (int i=1;i<=n-1;i++)
//    {
//        cout<<g[u
//    }

    cout<<"Printing Output:\n";
    for ( int i=1 ;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
            cout<<g[i][j]<<"\t";
        cout<<"\n";
    }

     return 0;

}
