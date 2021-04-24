#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> 
#include<math.h>
#include<ctime>
#include<chrono>
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
using namespace std;



int len (long long int i)
{  int l ; 
    if (i==0) return 0 ; 
     for ( l = 0; i > 0; l++)  i = i / 10;
    return l ; 
}
int last_digit ( long long int i ) 
{    
    int l=i-(i/10)*10; 
    return l ; 
}
int main(){

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  
  long long int t, n,x[100],j; 
  cin>>t;
  f1(ii,t){
    int result=0 ; 
    cin>>n; 
     f0(i,n)cin>>x[i];
   
   f1(i,n-1)
   {
       if (x[i]>x[i-1]) continue ; 
       else if (len(x[i])==len(x[i-1])) {
           x[i]*=10 ;
           result++;
           }
       else { 
              int m=len(x[i]);
              int n=len(x[i-1]);
           
              int c=n-m ; 
              x[i]*=pow(10,c); 
              result+=c ; 
             if (x[i]<=x[i-1]) {

                   int f=x[i]/pow(10,c) ; 
                   int g=x[i-1]/pow(10,c) ; 
                   if (f>=g){

                   if (len(x[i-1]-x[i])<len(x[i-1]) && last_digit(x[i-1])<9 )   x[i]=x[i-1]+1 ; 
                          else {x[i]*=10 ; result++; }
                   }
                   else {x[i]*=10; result++; }
               }
       }      
   }
   
   cout<<"Case #"<<ii<<": "<<result<< "  :  ";

   f0(i,n)cout<<x[i]<<" "; cout<<endl ; 
  }
    
}