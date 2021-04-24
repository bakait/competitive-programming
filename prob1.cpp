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
  int n, j,t, cost, ptr,minelementindex;
  bool d;
  vector<int> v;
  vector<int>::iterator it;
  cin>>t;  
  f1(i,t){
  v.clear();   
  v.push_back(0);
  ptr=1; d=true;cost=0; 
  cin >> n;
  f0(i,n) {cin >> j; v.push_back(j);}

  while (!(v.size()==2))
  {   
    minelementindex = min_element(v.begin()+1, v.end()) - v.begin();
    it = v.begin() + minelementindex;
    int s=v.size(); 
    if (d) cost+=(ptr <= minelementindex) ? minelementindex - ptr + 1 : s - (ptr - minelementindex);
    else   cost+=(ptr < minelementindex)  ? s - (minelementindex - ptr) : ptr - minelementindex + 1;
   
   
    if (ptr==minelementindex) {
        if (ptr==1) ptr=minelementindex;
        else ptr=minelementindex-1;  
         }
    else
    { if (d) ptr=minelementindex-1; 
     else {
          if (minelementindex==s-1 ) ptr=minelementindex-1; 
          else ptr=minelementindex; 
         }
     d=!d; 
    }
    v.erase(it,it+1) ; 
 }

   cout<<"Case #"<<i<<": "<<cost <<endl ; 
  }

return 0 ; 
}