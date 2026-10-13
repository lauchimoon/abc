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
    int M,D,y,m,d;
    cin >> M >> D >> y >> m >> d;
    if (d == D && m == M)
        cout << y+1 << ' ' << 1 << ' ' << 1 << '\n';
    else if (d == D)
        cout << y << ' ' << m+1 << ' ' << 1 << '\n';
    else
        cout << y << ' ' << m << ' ' << d+1 << '\n';
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

