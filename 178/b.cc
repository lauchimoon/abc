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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<ll> ops = {
        max(a,b)*max(c,d), min(a,b)*max(c,d),
        max(a,b)*min(c,d), min(a,b)*min(c,d),
    };
    cout << *max_element(all(ops)) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while (t--)
        solve();
    return 0;
}

