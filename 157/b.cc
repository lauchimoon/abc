#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
#define none(p) ((p).first == -1) && ((p).second == -1)
using ii = pair<int,int>;
using ll = long long;

int g[3][3];
bool bg[3][3];

ii findc(int b)
{
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (g[i][j] == b)
                return mp(i,j);
    return mp(-1,-1);
}

void solve()
{
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> g[i][j];
    int n;
    cin >> n;
    while (n--) {
        int b;
        cin >> b;
        ii p = findc(b);
        if (none(p))
            continue;
        bg[p.first][p.second] = true;

        if ((bg[0][0] && bg[1][1] && bg[2][2]) ||
            (bg[0][2] && bg[1][1] && bg[2][0])) {
            cout << "Yes\n";
            return;
        }
        for (int i = 0; i < 3; ++i)
            if (bg[i][0] && bg[i][1] && bg[i][2]) {
                cout << "Yes\n";
                return;
            }
        for (int i = 0; i < 3; ++i)
            if (bg[0][i] && bg[1][i] && bg[2][i]) {
                cout << "Yes\n";
                return;
            }
    }
    cout << "No\n";
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

