#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)  
#define f1(i,n) for(int i=1;i<=n;i++)  
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)  
#define trav(a,x) for (auto& a : x)
#define ll long long  
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)  
#define ps(s)	printf("%s\n",s)  
#define deb(x) cerr << #x << "=" << x << endl  
#define deb2(x, y) cerr << #x << "=" << x << ", " << #y << "=" << y << endl  
#define deb3(x, y,z) cerr << #x << "=" << x << ", " << #y << "=" << y <<", "<<#z<<"="<<z<< endl
#define deb4(w,x,y,z) cerr <<#w<<"="<<w<<", "<< #x << "=" << x << ", " << #y << "=" << y <<", "<<#z<<"="<<z<< endl
#define pb push_back  
#define mp make_pair  
#define F first  
#define S second  
#define all(x) x.begin(), x.end()  
#define clr(x) memset(x, 0, sizeof(x))  
#define sortall(x) sort(all(x))  
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)  
#define PI 3.1415926535897932384626  
#define show(x) cerr<<#x<<": ";  for(auto i: x) cerr<<i<<' ';cerr<<'\n'
#define endl '\n' 
#define nl cout<<'\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define local freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
typedef pair<int, int>	pii;  
typedef pair<ll, ll>	pl;  
typedef vector<int>		vi;  
typedef vector<ll>		vl;  
typedef vector<pii>		vpii;  
typedef vector<pl>		vpl;  
typedef vector<vi>		vvi;  
typedef vector<vl>		vvl;  

int n,dp[100000], a[110000]; 

// int rec(vi a, int level){
//     //base case 
//     if (level==1){return 0 ; }
//     if (level==2) return abs(a[level]-a[1])  ; 
//     //pruning
//     if (level>n) {return 0 ; }
//     if(dp[level]!=-1) return dp[level] ; 
//     int cost=min(rec(a,level-1)+abs(a[level]-a[level-1]),rec(a,level-2)+abs(a[level]-a[level-2])) ; 
//     return dp[level]=cost ; 
// }



// void solve(int t)  {
//      cin>>n ; 
//     vi a(n+1) ; 
//     f1(i,n)cin>>a[i] ; 
// //     show(a) ; 
//    memset(dp,-1,sizeof(dp)) ; 
//    cout<<rec(a,n); 


// }

// int32_t main(){
// fastio;
// int t=1 ; 
// // cin>>t; 
// f1(i,t) solve(i);
// return 0;
// }


int main(){
	int i,k ; 
	memset(dp,0,sizeof dp) ; 
	cin>>n>>k ; 
	for(int i=0;i<n;i++){ cin>>a[i] ; }
	dp[1]=abs(a[1]-a[0]) ; 
	for(i=2;i<n;i++){
		int cost=INT_MAX ; 
		for(int j=1;j<=k;j++){
			cost=min(cost,dp[i-j]+abs(a[i]-a[i-j])) ; 
		}	
		// dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i-2]-a[i])) ;
		dp[i]=cost ; 
	}
	cout<<dp[n-1] ; 
	return 0 ; 
}