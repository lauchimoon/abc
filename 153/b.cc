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
    int h,n;
    cin >> h >> n;
    vector<int> a(n);
    rdv(a,n);
    sort(all(a));
    int i = n-1;
    while (h > 0 && i >= 0)
        h -= a[i--];
    cout << ((h <= 0)? "Yes" : "No") << '\n';
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

