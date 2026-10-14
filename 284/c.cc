#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

const int MAXN = 105;
bool vis[MAXN];
vector<int> graph[MAXN];

void dfs(int v)
{
    vis[v] = true;
    for (auto x : graph[v])
        if (!vis[x])
            dfs(x);
}

ll count_connected(int n)
{
    ll c = 0;
    for (int i = 1; i <= n; ++i)
        if (!vis[i]) {
            dfs(i);
            ++c;
        }
    return c;
}

void solve()
{
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int a,b;
        cin >> a >> b;
        graph[a].pb(b); graph[b].pb(a);
    }
    cout << count_connected(n) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--)
        solve();
    return 0;
}

