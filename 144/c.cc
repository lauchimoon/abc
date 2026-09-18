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
    ll n;
    cin >> n;
    set<ll> s;
    ll k = n;
    for (ll a = 2; a*a <= n; ++a) {
        if (k%a != 0)
            continue;
        s.insert(a);
    }
    s.insert(1);
    ll ans = 1e13 + 5;
    for (ll x : s) {
        ll a = x;
        ll b = n/a;
        ans = min(ans, a+b-2);
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

