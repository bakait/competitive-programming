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
vector<int> g[220] ; 
bool vis[220] ; 
 
void dfs(int v){
    if (vis[v]) return ; 
    vis[v]=true ; 
    for(auto p : g[v]){
      dfs(p); 
    }
   }

void solve()  { 
  int n , m ,k,cnt_zero=0,ans=0,x; 
  cin>>n>>m ; 
  //  deb(g[5][0]) ; 
  f1(i,n){
      cin>> k  ; 
      // deb2(i,k) ; 
      //  if (i==5) deb(g[i][0]) ; 
      if (k==0) {cnt_zero++; continue ; } 
      while(k--){ cin>>x; 
       x+=n; 
       g[x].pb(i) ; 
       g[i].pb(x) ; 
       }
  }
  // deb2(cnt_zero,n)  ; 
  // nl ; 
  // f1(i,10){ cout<<"i:"<<i<<"   " ; 
  //   for(auto it=g[i].begin();it!=g[i].end();it++)
  //   cout<<*it<<" " ; 
  //   cout<<endl ; 
  // }
  // nl ; 
  if (cnt_zero==n) {  cout<<n; return ; }
  f1(i,n){
    if (!vis[i]) ans++,dfs(i); 
  } 
  cout<<ans-1 ; 
}
int32_t main(){
solve();
return 0;
}




























