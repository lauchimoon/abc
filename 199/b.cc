#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

const int INF = 1e5+5;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rdv(a,n);
    rdv(b,n);
    int mnb = INF, mxa = 0;
    for (int i = 0; i < n; ++i) {
        mnb = min(mnb,b[i]);
        mxa = max(mxa,a[i]);
    }
    cout << max(0,mnb-mxa+1) << '\n';
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

