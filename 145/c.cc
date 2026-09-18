#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

int x[10], y[10];

double d(int i, int j)
{
    double dx = x[i]-x[j];
    double dy = y[i]-y[j];
    return sqrt(dx*dx + dy*dy);
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> x[i] >> y[i];
    double s = 0.0;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        v[i] = i+1;
    do {
        for (int i = 0; i < n-1; ++i)
            s += d(v[i],v[i+1]);
    } while (next_permutation(all(v)));
    int f = 1;
    for (int i = 2; i <= n; ++i)
        f *= i;
    cout << setprecision(10) << s/f << '\n';
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

