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
    multiset<ll> s;
    int q;
    cin >> q;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            s.insert(x);
        } else if (t == 2) {
            int x,c;
            cin >> x >> c;
            while (c-- && s.find(x) != s.end())
                s.erase(s.find(x));
        } else if (t == 3) {
            ll mn = *s.begin();
            ll mx = *s.rbegin();
            cout << mx-mn << '\n';
        }
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

