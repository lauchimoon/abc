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
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> scores(n,k-q);
    while (q--) {
        int a;
        cin >> a;
        ++scores[a-1];
    }
    for (int i = 0; i < n; ++i)
        cout << ((scores[i] <= 0)? "No" : "Yes") << '\n';
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

