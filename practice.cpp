#include<bits/stdc++.h> 
#define all(v) (v).begin(),(v).end()
using namespace std;

int main(){
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout); 
 int a[30]; 
 int d[30][3],n,k; 
  cin>>t ; 
for(int ii=1;ii<=t; i++) {
   cin>> n >>k; 
   cin>>a[0];
   d[0][0]=a[i]-1; 
   d[0][1]=a[i];
   d[0][2]=a[i];  
   for(int i =1; i<n;i++){
	   cin>>a[i];
	   d[i][0]=(a[i]-a[i-1])/2; 
	   d[i][1]=a[i];
	   d[i][2]=a[i-1]; 
   }
 


}

 
 return 0 ; 



} 