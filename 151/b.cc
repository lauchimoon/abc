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
    int n,k,m;
    cin >> n >> k >> m;
    int sum = 0;
    for (int i = 0; i < n-1; ++i) {
        int x;
        cin >> x;
        sum += x;
    }
    for (int i = 0; i <= k; ++i)
        if (sum+i >= m*n) {
            cout << i << '\n';
            return;
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

