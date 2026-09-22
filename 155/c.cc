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
    int mx = 0;
    map<string,int> mp;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        mx = max(mx,++mp[s]);
    }
    for (auto [s,cnt] : mp)
        if (cnt == mx)
            cout << s << '\n';
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

