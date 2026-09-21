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
    map<int,bool> solved;
    map<int,int> wa;
    int cor = 0, pen = 0;
    for (int i = 0; i < m; ++i) {
        int p;
        string s;
        cin >> p >> s;
        if (s == "AC" && !solved[p]) {
            ++cor;
            solved[p] = true;
            pen += wa[p];
        }
        if (s == "WA" && !solved[p])
            ++wa[p];
    }
    cout << cor << ' ' << pen << '\n';
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

