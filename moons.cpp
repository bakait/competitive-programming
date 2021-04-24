#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include<cstring>
#include<string>
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
using namespace std;

int main()
{
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
  int t,cost,c,j;
  string s ;
  cin>>t;
  f1(i,t){
  cin>>c>>j>>s;
  cost=0;
  int  ii=0 ;

  while (s[ii]=='?'){ii++;}
    char p=s[ii];
   f0(i,ii)s[i]=p;

  for (int i =ii+1;i<s.length();i++)
  {
      if(s[i]=='?') s[i]=p;
      else p=s[i];
  }

  for (int i=1;i<s.length();i++){
      if (s.substr(i-1,2)=="CJ" ) cost+=c;
      if (s.substr(i-1,2)=="JC")  cost+=j;
  }

      cout<<"Case #"<<i<<": "<<cost <<endl ;
  }
return 0 ;
}


