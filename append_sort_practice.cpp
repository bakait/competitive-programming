#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> 
#include<math.h>
#include<ctime>
#include<chrono>
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define all(v) (v).begin(),(v).end()
using namespace std;
  auto incr = [&] (string& x){
    	reverse(all(x));
    	int carry = 0;
    	int z = (x[0] - '0') + 1;
    	if (z == 10){
    		carry = 1;
    		x[0] = '0';
    	}
    	else{
    		x[0] += 1;
    		reverse(all(x));
    		return;

    	}
    	for(int i = 1; carry > 0 && i < x.size(); ++i){
    		int z = (x[i] - '0') + carry;
    		if (z == 10){
    			x[i] = '0';
    			carry = 1;
    		}
    		else{
    			x[i] += 1;
    			carry = 0;
    		}
    	}
    	if (carry > 0){
    		x += '1';
    	}

    	reverse(all(x));
    };




string add (string s) {
    int l=s.length()-1; 
    // s[l]++; 
     s[l]+=1; 
    return s ; 
}

bool is_prefix(string current,string previous) {
    
       int j=current.length(); 
       f0(i,j) if (current[i]!=previous[i]) return false; 
       return true; 

}

int main(){
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout); 
    // string curr="1324"; 
    // incr (curr) ; 
 string curr,prev; 
  int t,n,result=0;
   string a[100];       
  cin>>t ; 
  f1(ii,t) {
   cin>>n;
   
   f0(i,n) cin>>a[i]; 
   result=0; 
     f1(j,n-1) {
      
      int diff=a[j-1].length()-a[j].length(); 
      if (is_prefix(a[j],a[j-1])){
          string temp=a[j-1]; 
          incr(temp) ;    
          if (is_prefix(a[j],temp)){
                      result+=diff; 
                      a[j]=temp ;                     
                      }
      else {
                result+=diff+1; 
                f0(i,diff+1) a[j]+='0'; 
      }                
      }
             
      else if(diff>=0)
       {
        result+=diff; 
        f0(i,diff) a[j]+='0'; 
        if(a[j]<=a[j-1]){result++; a[j]+='0';} 
        }
     
   }
  
  cout<<"Case #"<<ii<<": "<<result<<endl;
  // cout<<"Case #"<<ii<<": "<<result<<" :";
  // f0(i,n) cout<<a[i]<<" "; cout <<endl; 
     
  }
 return 0 ; 
} 
   