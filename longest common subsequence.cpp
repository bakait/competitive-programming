#include<bits/stdc++.h>
using namespace std;
#define f0(n) for (int i=0;i<n;i++)

int l[20][20];

int main()
{
    string s1,s2;
    stack<char>s;
    s1="AGGTAB",s2= "GXTXAYB";
    cout<<"enter first string :"<<s1;
//    cin>>s1;
    cout<<endl<<"enter second string :"<<s2;
//    cin>>s2;
     int l1=s1.length() ;
     int l2=s2.length();

      memset (l,0,sizeof(l[0][0])*(l1+1)*(l2+1));


   for (int i=0;i<l1;i++)
    {
        for(int j=0;j<l2;j++)
          {
              if (s1[i]==s2[j]) l[i+1][j+1]=1+l[i][j];
              else l[i+1][j+1]=max(l[i+1][j],l[i][j+1]);
          }
    }

   cout<<endl<<"elements in array:"<<endl;
   for (int i=0;i<=l1;i++) {for(int j=0;j<=l2;j++) cout<<l[i][j]<<"("<<i<<","<<j<<")"<<'\t'; cout<<endl;}

   int m=l1,n=l2;
   while(m>0&&n>0)
   {
       cout<<"("<<m<<","<<n<<")   "<<l[m][n]<<'\t'<<endl;
       if ((l[m][n]>l[m-1][n]) && (l[m][n]>l[m][n-1]))
       {
          cout<<"pushing"<<s1[m-1]<<" into the stack"<<endl;  s.push(s1[m-1]);m--;n--;
       }
       else if (l[m][n]==l[m-1][n]) m--;
       else n--;
   }

//     cout<<endl<<"elements in array:"<<endl;
//   for (int i=0;i<=l1;i++) {for(int j=0;j<=l2;j++) cout<<l[i][j]<<"("<<i<<","<<j<<")"<<'\t'; cout<<endl;}

   cout<<"\n stack size"<<s.size()<<endl;
   while(!s.empty())
   {
       cout<<'\t'<<s.top();
       s.pop();
   }

}


