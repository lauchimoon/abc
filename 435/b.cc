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
    int n;
    cin >> n;
    vector<int> a(n);
    rdv(a,n);
    vector<int> pref(n+1,0);
    for (int i = 1; i <= n; ++i)
        pref[i] = pref[i-1]+a[i-1];
    int ans = 0;
    for (int l = 0; l < n; ++l) {
        for (int r = l; r < n; ++r) {
            ll s = pref[r+1]-pref[l];
            bool ok = true;
            for (int i = l; i <= r; ++i)
                if (s%a[i] == 0) {
                    ok = false;
                    break;
                }
            ans += ok;
        }
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

