#include<bits/stdc++.h>
using namespace std;


int l[100][100];
void lcs(string a,string b)
{

  for(int i=0;i<a.length();i++)
    for(int j=0;j<b.length();j++)
        l[i][j]=0 ;

// for(int i=0;i<a.length();i++) cout<<i<<":"<<a[i]<<endl ;
  for(int i=1;i<a.length();i++)
    for(int j=1;j<b.length();j++)
  {
       if (a[i]==b[j])
        l[i][j]=max(1+l[i-1][j-1],max(l[i-1][j],l[i][j-1]));
       else
        l[i][j]=max(l[i-1][j],l[i][j-1]);
  }

  for(int i=0;i<a.length();i++)
  {
      for (int j=0;j<b.length();j++)
        cout<<l[i][j]<<" ";
      cout<<endl;
  }


}


int main()
{
   string a, b;
   cout<<"enter a:";cin>>a;
   cout<<"enter b:";cin>>b;

//   cout<<max(2,max(max(max(3,1),5),6)); return 0 ;

   lcs(" "+a," "+b);

}
