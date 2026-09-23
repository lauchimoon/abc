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
    int ans = INT_MAX;
    for (int i = -100; i <= 100; ++i) {
        int s = 0;
        for (int x : a)
            s += (x-i)*(x-i);
        ans = min(ans,s);
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

