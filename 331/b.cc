#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

const int INF = 1e6+5;

void solve()
{
    int n,s,m,l;
    cin >> n >> s >> m >> l;
    int ans = INF;
    for (int i = 0; i <= 100; ++i)
        for (int j = 0; j <= 100; ++j)
            for (int k = 0; k <= 100; ++k)
                if (6*i+8*j+12*k >= n)
                    ans = min(ans,i*s+j*m+k*l);
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

