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


void solve()  {
	string n ; 
	cin>>n ; 
	int res=0,c=0   ; 
	while(n.length()>1){
	for(int i=0; i<n.length();i++){
           res+=n[i]-'0' ; 
	}
	// deb(res) ; 
	n=to_string(res); res=0 ; 	
	c++ ; 
	}	
	cout<<c ; 
// nl ; 	cout<<res << " " <<n.length()<<" "<<n; 

}
int32_t main(){
solve();
return 0;
}




























