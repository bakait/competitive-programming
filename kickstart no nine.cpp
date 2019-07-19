#include<bits/stdc++.h>
using namespace std;
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

//int y=0;
//
//bool check(int n)
//{
//    string s=to_string(n);
//    int k=0;
//    while(s.length()>1)
//    {
//        for(int i=0;i<s.length();i++)
//        {
//            if (s[i]=='9') return true;
//            k=k+(s[i]-'0');
//        }
//        s=to_string(k);k=0;
//    }
//    if (s=="9") return true;
//    else return false;
//}


int main()
{
  int t,f,l,c;

//  freopen("A-small-practice (1).in","r",stdin);
  freopen("test.txt","r",stdin);
//  freopen("output.out","w",stdout);
  regex re("[0-8]*9[0-8]*");
  cin>>t;
    f1(ii,t)
      {   c=0;

          cin>>f>>l;
          int m=f+(9-f%9);
           cout<<"value of m; "<<m<<endl;
          for(int i=f;i<=l;i++)
          {
              if (i==m) {m+=9;continue;}
              else if(regex_match(to_string(i),re)) continue;
               else c++;
          }

         cout<<"Case #"<<ii<<": "<<c<<endl;
      }

}
