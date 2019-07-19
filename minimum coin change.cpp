#include<iostream>
#include<math.h>
#include<climits>
#define f0(i,n) for (int i=0;i<n;i++)
#define f1(i,n) for (int i=1;i<=n;i++)
using namespace std;



int minimum_coin_change(int a[],int n,int v)
{
    int k[50],coins[50];
    f0(i,50) k[i]=INT_MAX-1;
        k[0]=0;
    printf("Printing values in array K:");
    f0(i,15) printf("k[%d]=%d\n",i,k[i]);
    f0(i,n)
    {
        f1(j,v)
        {
//            printf("value if i:%d",i);
            if (a[i]<=j)
            {
                //printf("value of i :%d",i);
                printf("Inside main loop, value of k[%d]=%d k[%d-a[%d]]=k[%d]=%d\n",j,k[j],j,i,j-a[i],k[j-a[i]]);
                k[j]=min(k[j],k[j-a[i]]+1);
                //printf("final_value_of k[%d]=%d",j,k[j]);


            }
        }
    }
   return (k[v]);
}

int main()
{

    int t,v,n,c[100],k[100];

    printf("Enter the no of test cases:");
    scanf("%d",&t);

    for (int j=1;j<=t;j++)
    {
        printf("Enter Value:");
        scanf("%d",&v);
        printf("enter no of coins:");
        scanf("%d",&n);

        f0(i,n)
        {
            scanf("%d",&c[i]);
        }

         printf("Printig values:\n");
         f0(i,n)
         {
             printf("%d\n",c[i]);
         }

        printf("Printing result\n");
        printf("%d",minimum_coin_change(c,n,v));


    }

}


