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
    int n,s;
    cin >> n >> s;
    vector<int> t(n);
    rdv(t,n);
    if (2*t[0] > 2*s + 1) {
        cout << "No\n";
        return;
    }
    for (int i = 1; i < n; ++i) {
        if (2*(t[i]-t[i-1]) > 2*s + 1) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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

