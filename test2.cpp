#include<bits/stdc++.h>
using namespace std;

int main()
{
  float numerator,denominator,ratio,ratio2,i,j,n1=1,d1=1,n2=1,d2=0,t=1000;
  cout<<"Enter numerator:";
  cin>>numerator;
  cout<<endl<<"Enter denominator:";
  cin>>denominator;
  char s1='R',s2='L';
 if (denominator>numerator)
    {i=denominator;denominator=numerator;numerator=i;s1='L';s2='R';}
 ratio=numerator/denominator;
  cout<<s1;
while(t--)
{
    i=n1+n2;j=d1+d2;
    ratio2=i/j;
    if (ratio>ratio2) { cout<<s1; n1=i;d1=j; }
    else if (ratio<ratio2) {  cout<<s2; n2=i;d2=j;}
    else break;
}
}
