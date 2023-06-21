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
#define int long long 
typedef pair<int, int>	pii;  
typedef pair<ll, ll>	pl;  
typedef vector<int>		vi;  
typedef vector<ll>		vl;  
typedef vector<pii>		vpii;  
typedef vector<pl>		vpl;  
typedef vector<vi>		vvi;  
typedef vector<vl>		vvl;  



  int n,W; 
  int w[100],v[100];  
int rec (int level,int weight ){
      //base case 
      int max_sum ; 
	if (level<1 ) return 0; 

	 //compute 
	 if (w[level]<weight){
      max_sum= max(v[level]+rec(level-1,weight-w[level]),rec(level-1,weight) )  ; 
	 }else {max_sum=rec(level-1,weight); }
       
       return max_sum ; 
}

void solve()  { 
  cin>>n>>W ; 
  f1(i,n) cin>>w[i]>>v[i];
//   cout<<rec(n,W) ; 
  int dp[100][100] ; 
  memset(dp,0,sizeof dp ) ; 
  f1(i,n){
	for (int j=1;j<=W;j++)  {
             if (w[i]>j) dp[i][j]= dp[i-1][j] ; 
	     else {
		dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]) ; 
	     }

	}
  }
  f1(i,n){ f1(j,W) cout<<dp[i][j]<<" "; cout<<endl ;  }
  cout<<endl ; 
  cout<<dp[n][W] ; 
}
int32_t main(){
solve();
return 0;
}




























