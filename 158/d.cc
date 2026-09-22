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
    string s;
    int q;
    cin >> s >> q;
    bool rev = false;
    int rcount = 0;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            rev = !rev;
            ++rcount;
        } else if (t == 2) {
            int f;
            char c;
            cin >> f >> c;
            if (f == 1) s.insert(rev? s.end() : s.begin(), c);
            if (f == 2) s.insert(rev? s.begin() : s.end(), c);
        }
    }
    if (rcount&1)
        reverse(all(s));
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

