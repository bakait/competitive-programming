//#include <iostream>
#include <fstream>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <ctime>
#include <algorithm>
#include <sstream>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <cstdlib>
#include <cstdio>
#include <iterator>
#include <functional>
#include <bitset>
#define mp make_pair
#define pb push_back

#ifdef LOCAL
#define eprintf(...) fprintf(stderr,__VA_ARGS__)
#else
#define eprintf(...)
#define deb(x) cerr << #x << "=" << x << endl  
#define deb2(x, y) cerr << #x << "=" << x << ", " << #y << "=" << y << endl  
#define deb3(x, y,z) cerr << #x << "=" << x << ", " << #y << "=" << y <<", "<<#z<<"="<<z<< endl
#define deb4(w,x,y,z) cerr <<#w<<"="<<w<<", "<< #x << "=" << x << ", " << #y << "=" << y <<", "<<#z<<"="<<z<< endl
#define show(x) cerr<<#x<<": ";  for(auto i: x) cerr<<i<<' ';cerr<<'\n'
#endif

#if ( _WIN32 || __WIN32__ )
    #define LLD "%I64d"
#else
    #define LLD "%lld"
#endif

using namespace std;

#define TASKNAME "A"

typedef long long ll;
typedef long double ld;

const int MAXN = 110;

vector<int> g[MAXN*2];

bool used[MAXN*2];

void dfs(int v){
    if (used[v]) {deb2(v,used[v]); return;}
    used[v] = true;
    // show(g[v]) ; 
    for (int i = 0; i < (int)g[v].size(); i++)
        dfs(g[v][i]);

}



int main(){
  #ifdef LOCAL
    freopen(TASKNAME".in","r",stdin);
    freopen(TASKNAME".out","w",stdout);
  #endif
    int n,m;

    scanf("%d %d",&n,&m);

    bool any = false;

    for (int i = 0; i < n; i++){
        int k;
        scanf("%d",&k);
        any |= (k != 0);
        for (int j = 0; j < k; j++){
            int b;
            scanf("%d",&b);
            b += n-1;
            g[i].pb(b);
            g[b].pb(i);
        }
    }
    for(int i =0;i<15;i++)
    {    cout<<"i:"<<i<<"     " ; 
         for (auto it=g[i].begin();it!=g[i].end(); it++) cout<<*it<<" " ; 
            cout<<endl ; 
    }
    cout<<endl ; 
    
    // for (auto it=g.begin();it!=g.end();it++){
    //     for(auto j=it->begin();j!=it->end;j++)
    //         cout<<*j<<" "; 
    //         cout<<'\n' ; 
    // }
     
    int ans = 0;

    for (int i = 0; i < n; i++){
        deb2(i,used[i]) ; 
        // show(used) ; 
        if (!used[i]) ans++, dfs(i);
    }

    ans = max(0, ans-any);

    printf("%d\n",ans);

      
  return 0;
}



