#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define Fo(i, k, n) \
    for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define trav(a, x) for (auto& a : x)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cerr << #x << "=" << x << endl
#define deb2(x, y) cerr << #x << "=" << x << ", " << #y << "=" << y << endl
#define deb3(x, y, z)                                                          \
    cerr << #x << "=" << x << ", " << #y << "=" << y << ", " << #z << "=" << z \
         << endl
#define deb4(w, x, y, z)                                                       \
    cerr << #w << "=" << w << ", " << #x << "=" << x << ", " << #y << "=" << y \
         << ", " << #z << "=" << z << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define show(x)                        \
    cerr << #x << ": ";                \
    for (auto i : x) cerr << i << ' '; \
    cerr << '\n'
#define endl '\n'
#define nl cout << '\n'
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define local                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int n, m;
int cntpig(int row, int col, vector<vector<char>>& a) {
    int cnt = 0;
    if (row != 0) cnt += (a[row - 1][col] == 'P') ? 1 : 0;
    if (col != 0) cnt += (a[row][col - 1] == 'P') ? 1 : 0;
    if (row != n - 1) cnt += (a[row + 1][col] == 'P') ? 1 : 0;
    if (col != m - 1) cnt += (a[row][col + 1] == 'P') ? 1 : 0;
    return cnt;
}

void printGrid(vector<vector<char>>& a) {
    fo(i, n) { fo(j, m) cout << a[i][j] << " "; nl; }
}
void removePig(vector<vector<char>>& a, int row, int col) {
    a[row][col] = '.';
//     deb2(row, col);
     
    if (row != 0 && a[row - 1][col] == 'P') { a[row - 1][col] =  '.' ; return; }
    if (col != 0 && a[row][col - 1] == 'P') { a[row][col - 1] = '.' ; return; }
    if (row != n - 1 && a[row + 1][col] == 'P') { a[row + 1][col] ='.'; return; }
    if (col != m - 1 && a[row][col + 1] == 'P') { a[row][col + 1] = '.'; return; }
}

void solve() {
    cin >> n >> m;
    int pig = 0, pignew = 0;
    vector<vector<char>> a(n, vector<char>(m));
    fo(i, n) { fo(j, m) { cin >> a[i][j]; pig += a[i][j] == 'P' ? 1 : 0; } }

    f1(k, 4) { fo(i, n) { fo(j, m) {
                if (a[i][j] == 'W' && cntpig(i, j, a) == k) removePig(a, i, j);
            }
        }
    }
//     deb(cntpig(2, 2, a)); nl ; 
    fo(i, n) { fo(j, m) { cin >> a[i][j]; pignew += a[i][j] == 'P' ? 1 : 0; } }
//     deb2(pig, pignew);
//     printGrid(a);
    cout << pig - pignew;
}
int32_t main() {
    solve();
    return 0;
}
