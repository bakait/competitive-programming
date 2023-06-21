#include<bits/stdc++.h>
using namespace std; 

int dp[1001][1001];


int rec(int x, int y){
	//pruning case 

	//base case
	if(x==0&&y==){
		return 0 ; 
	}

	//cache check
	if(dp[x][y]!=-1) return dp[x][y] ; 

	//compute
	for(int z=0;z<x;z++){
		if(rec(z,y)==0){ ans=1; break ; }
	}

	for(int z=0;z<y;z++){
		if(rec(x,z)==0){ ans=1; break ; }
	}

	for(int z=0;z<min(x,y);z++){
		if(rec(x-z,y-z)==0){ ans=1; break ; }
	}
	//save and return 
	return dp[x][y]=ans ; 
}

void solve(){
  int a,b; 
  cin>>a>>b ; 
  memset(dp,-1,sizeof(dp)) ; 
  cout<<rec(a,b)<<endl l; 
}

int main(){
	ios_base::sync_with_stdio(0) ; 
	cin.tie(0);cout.tie(0) ; 
	solve() ; 
}