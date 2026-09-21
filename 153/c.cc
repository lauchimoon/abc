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
    int n,k;
    cin >> n >> k;
    vector<ll> h(n);
    rdv(h,n);
    sort(all(h));
    int i = n-1;
    ll ans = 0;
    while (i >= 0) {
        if (k > 0) {
            --k;
            h[i] = 0;
        } else
            ans += h[i];
        --i;
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

