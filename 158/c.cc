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
    int a,b;
    cin >> a >> b;
    for (int i = 1; i <= 1009; ++i) {
        double aa = floor(double(i)*0.08);
        double bb = floor(double(i)*0.1);
        if (aa == a && bb == b) {
            cout << i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
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

