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
    int n,m;
    cin >> n >> m;
    vector<ii> v(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        v[a-1].first += b;
        ++v[a-1].second;
    }
    for (int k = 0; k < m; ++k) {
        double sum = double(v[k].first);
        double sz = double(v[k].second);
        cout << sum/sz << '\n';
    }
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

