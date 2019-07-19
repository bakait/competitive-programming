#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

int swap(char* p )
{
    int m,tot=0 ,f=1;
    f0(i,strlen(p)-1)   if (p[i]=='C'&&p[i+1]=='S')m=i;
    p[m]='S'; p[m+1]='C';
    f0(i,strlen(p))
    if (p[i]=='S') tot+=f;
     else f*=2;
    return tot;
 }
int solve (int d,char *p)
{
  int tot=0,s=0,f=1,no_of_swap=0;
  f0(i,strlen(p))
  {
     if (p[i]=='S') {s++;tot+=f;}
      else f*=2;
  }
  if (s>d) return -1;
  while(tot>d)
  {   tot=swap(p);
      no_of_swap++;
  }
  return no_of_swap;
}
int main()
{
    int t,d;
    char p[30];
    cin>>t;
    f1(i,t)
    {
        cin>>d>>p;
        int j=strlen(p);
        int result=solve(d,p);
        if (result==-1) printf("Case #%d: %s\n",i,"IMPOSSIBLE");
        else printf("Case #%d: %d\n",i,result);
    }
}
