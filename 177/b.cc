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
    string s,t;
    cin >> s >> t;
    int ans = INT_MAX;
    for (int i = 0; i <= s.size()-t.size(); ++i) {
        int d = 0;
        for (int j = 0; j < t.size(); ++j)
            d += (t[j] != s[i+j]);
        ans = min(ans,d);
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

