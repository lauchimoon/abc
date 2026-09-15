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
    int h,w;
    cin >> h >> w;
    vector<ii> pieces;
    for (int i = 0; i < h; ++i)
        for (int j = 0; j < w; ++j) {
            char c;
            cin >> c;
            if (c == 'o')
                pieces.pb(mp(i,j));
        }
    auto [a,b] = pieces[0];
    auto [c,d] = pieces[1];
    cout << abs(a-c)+abs(b-d) << '\n';
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

