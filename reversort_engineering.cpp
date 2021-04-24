#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> 
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
using namespace std;

int main()
{
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  
  int t; 
  cin>>t;  
  f1(ii,t){
    bool d=true ; 
  int n,c,m=0,k,f, j,l,cost,s,a[100],v[100]={0};
     cin>>n>>c; 
     if (c<n-1 || c>(n*(n+1)/2-1))
      {
         cout<<"Case #"<<ii<<": IMPOSSIBLE"<<endl ;
         continue ;
      }
     f0(i,n-1)a[i]=1;
     int x=c; 
     c=c-(n-1);
  f0(i,n){
        k=n-(i+1);
        if (c>k) {a[i]+=k; c-=k;} 
         else if (c>=1){a[i]+=c;  c=0;}
         }    
   
  j=a[0]; 
 for (f=1;f<n;f++) {
    v[j]=f;
    d=!d;
    if (a[f]==1||f==(n-1)) break; 
    l=(d)?a[f]:(a[f]*-1);
    j=j+l;
 }
 if (d){
       for(int i=j+1;i<=n;i++) 
       { 
         if (v[i]==0) {f++;v[i]=f;}
         else break ;       
       }
       
       for(int i=j-1;i>0;i--)
       {
         
         if (v[i]==0) {f++;v[i]=f;}
         else break ; 
       }

     }
 else {
        for(int i=j-1;i>0;i--)
       {
         
         if (v[i]==0) {f++;v[i]=f;}
         else break ; 
       }

       for(int i=j+1;i<=n;i++) 
       { 
         if (v[i]==0) {f++;v[i]=f;}
         else break ;       
       }
     }    
   cout<<"Case #"<<ii<<": " ; 
   f1(i,n) cout<<v[i]<<'\t';
   cout<<endl ; 
}  
  
return 0 ; 
}

















