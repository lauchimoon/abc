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
    int s;
    cin >> s;
    vector<int> dp(2001);
    dp[0] = 1;
    dp[1] = dp[2] = 0;
    for (int i = 3; i <= s; ++i)
        dp[i] = (dp[i-1]+dp[i-3])%MOD;
    cout << dp[s] << '\n';
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

