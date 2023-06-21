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

int dp[3000][3000] ; 
 string s , t ;  
int  rec(int ls,int lt){


        if (ls<0||lt<0)  return 0 ; 

	if (dp[ls][lt]==-1){
       if (s[ls]==t[lt]) return dp[ls][lt]=rec(ls-1,lt-1)+1  ; 
       else return dp[ls][lt]=(max(rec(ls-1,lt),rec(ls,lt-1))); 
       }
       else return dp[ls][lt] ; 
}

void solve()  { 
 cin>>s>>t ; 
 int ls,lt ; 
 memset(dp,0,sizeof dp) ;
 ls=s.length() ; lt=t.length() ; 
//  cout<<rec(ls-1,lt-1 ) ; 
//  nl ; 
//  fo(i,ls){ fo(j,lt) cout<<setw(3)<<dp[i][j]<<" " ; 
	//  nl ; }

 cout<<s<<endl ; 
 s=" "+s ;t=" "+t  ; 
 f1(i,ls) cout<<s[i];nl; 
  f1(i,ls){
	f1(j,lt){
		if(s[i]==t[j])  dp[i][j]=dp[i-1][j-1]+1 ; 
		else dp[i][j]=max(dp[i-1][j],dp[i][j-1]); 
	}
  } 
nl ; 
fo(i,ls+1){ fo(j,lt+1) cout<<setw(3)<<dp[i][j]<<" " ; nl ; }
//making string 
nl ; 
nl ;

string result="" ; 

int i=ls,j=lt ; 
   while (i>0 &&j>0) 
    {
        if (dp[i][j]>dp[i-1][j] && dp[i][j]>dp[i][j-1]){
          result+=s[i]; 
          i-- ; j-- ; 
        }
        else if (dp[i][j]==dp[i-1][j]) i-- ; 
        else j-- ; 
  }
  reverse(result.begin(),result.end()) ; 
  cout<<result ; 


}
int32_t main(){
solve();
return 0;
}




























