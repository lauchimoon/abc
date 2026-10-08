#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;
const int INF = 1e9+5;

void solve()
{
    int n,m;
    cin >> n >> m;
    vector<int> c(n+1,0);
    for (int i = 0; i < m; ++i) {
        int l,r;
        cin >> l >> r;
        ++c[--l], --c[r];
    }
    for (int i = 1; i <= n; ++i)
        c[i] += c[i-1];
    int ans = INF;
    for (int i = 0; i < n; ++i)
        ans = min(ans,c[i]);
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

