#include<bits/stdc++.h>
using namespace std;
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)



//void tripple_sort(int *a,int n)
//{
//    bool done=true;
//    int s;
//    while(done)
//    {
//        done=false;
//        f0(i,n-2)
//        {
//            if (a[i]>a[i+2]) {s=a[i+2];a[i+2]=a[i];a[i]=s;done=true;}
//
//        }
//    }
//
//}


int main()
{
   int t,n,v ,c[100000];
   vector<int>a,b,f;

  freopen("test.txt","r",stdin);

  cin>>t;

  f1(i,t)
  {   bool u=true;
      string result="OK";
      cin>>n;
      a.clear();b.clear();f.clear();
      f0(j,n)
      {
          cin>>v;
          c[j]=v;
         if(u) {a.push_back(v);u=false;}
          else {b.push_back(v);u=true;}

      }
      tripple_sort(c,n);
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      if (n%2==1) b.push_back(INT_MAX);
      auto jj=b.begin();

     for(auto ii=a.begin();ii!=a.end();ii++,jj++)
      {
          f.push_back(*ii);f.push_back(*jj);
      }

    f0(i,n-1){if (f[i]>f[i+1]) {result=to_string(i);break; }}
      cout<<"Case #"<<i<<": "<<result<<endl;

  }
}
