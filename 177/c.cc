#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;
const ll MOD = 1e9+7;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n), pre(n+1,0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        pre[i+1] = pre[i] + a[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ll sum = (pre[n]-pre[i+1])%MOD;
        ans += sum*a[i];
        ans %= MOD;
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

