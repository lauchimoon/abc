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
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    ll s = 0;
    for (auto &x : a) {
        cin >> x;
        s += x;
    }
    int cnt = 0;
    for (ll x : a)
        cnt += (4*m*x-s >= 0);
    cout << ((cnt >= m)? "Yes" : "No") << '\n';
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

