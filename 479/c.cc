#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

void solve()
{
    ll n,w;
    cin >> n >> w;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i] >> b[i];
    ll ans = 0;
    for (int i = 0; i < (1<<n); ++i) {
        ll v = 0, d = 0;
        for (int j = 0; j < n; ++j)
            if (i >> j&1) {
                d += a[j];
                v += b[j];
            }
        if (ans < d && v <= w)
            ans = d;
    }
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

