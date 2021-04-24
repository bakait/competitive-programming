#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> 
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n, j,t, cost,s, minelementindex=0;
  vector<int> v;
  vector<int>::iterator it;
  cin>>t;  
  f1(i,t){
  v.clear();   
  v.push_back(0);
  cost=0; 
  cin >> n;
  f0(i,n) {cin >> j; v.push_back(j);}
  s=v.size(); 
  f1(i,s-2){
     minelementindex=min_element(v.begin()+i,v.end())-v.begin();    
     cost+=minelementindex-i+1; 

     reverse(v.begin()+i,v.begin()+minelementindex+1); 
    }
   cout<<"Case #"<<i<<": "<<cost <<endl ; 
  }
return 0 ; 
}


