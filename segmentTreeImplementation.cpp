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

const int N=1e5+2 ; 
int a[N],tree[4*N] ; 

void build(int node,int start,int end ){
 if (start==end)	 {
	tree[node]=a[start] ; 
	return ; 
 }
 int mid=(start+end)/2; 
 build (2*node,start,mid) ; 
 build(2*node+1,mid+1,end) ; 
 tree[node]=tree[2*node]+tree[2*node+1] ; 
}

int query (int node,int start,int end, int l, int r){
	printf("query(%d,%d,%d,%d,%d)\n",node,start,end,l,r) ; 
	if (start>r||end<l){ return 0 ; }
	if (start>=l && end<=r){ return tree[node] ; }
         int mid =(start+end)/2 ; 
	 int q1=query(2*node,start,mid,l,r) ; 
	 int q2=query(2*node+1,mid+1,end,l,r) ; 
	 return q1+q2; 
}

int32_t main(){
int n ; 
cin>>n; 
for(int i=0;i<n;i++){cin>>a[i];}
build(1,0,n-1) ; 

while (1){
	int type; 
	cin>>type ; 
	if (type==-1){ break ; }
	if (type==1) {
		int l,r; 
		cin>>l >>r ; 
		int ans=query(1,0,n-1,l,r) ; 
		cout<<ans<<endl ; 
	}
}
nl ; 
for(int i=1;i<=15;i++){ printf("tree[%d]: %d\n",i,tree[i]); }
return 0;
}




























