#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

const int MAXN = 2e5+5;
bool vis[MAXN];
vector<int> graph[MAXN];
int ans = 0;
int TOP = 1e6;

void dfs(int v)
{
    if (ans == TOP)
        return;
    ++ans;
    vis[v] = true;
    for (auto x : graph[v]) {
        if (vis[x])
            continue;
        dfs(x);
    }
    vis[v] = false;
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
    dfs(1);
    cout << ans << '\n';
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

