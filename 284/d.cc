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
    ll p = 0, q = 0;
    for (ll i = 2; i*i <= n; ++i) {
        if (n%i != 0)
            continue;
        bool cond = (n/i)%i == 0;
        p = cond? i : sqrt(n/i);
        q = cond? n/i/i : i;
        break;
    }
    cout << p << ' ' << q << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

