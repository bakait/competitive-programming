#include<bits/stdc++.h>
using namespace std;

int a[8];

void increment(int &x)
{
    x++;
    if (x==8) x=0;

}

int main()
{

     memset(a,0,sizeof(int)*8);

    int c=0,t=1000,start;
    int result;
    while (t--)
    {

      if (a[c]==0)
      {
        start=c;
        increment(c);
        while(a[c]==1)
        {increment(c);
         if(start==c)  goto jump;
        }
        printf("updating a[%d]\n",c);
        if (a[c]==0) a[c]=1;

      }
      increment(c);
//            cout<<endl<<"Result: "<<c<<endl;
    }
 jump:
    for(int i=0 ;i<8;i++)
       {
              if (a[i]==0)  cout<<i+1<<" : " <<a[i]<<endl ;
       }

    return 0;

}
