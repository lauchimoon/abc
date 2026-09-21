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
    int n;
    string p, q;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        p += to_string(x);
    }
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        q += to_string(x);
    }
    string perm = "";
    vector<string> perms;
    for (int i = 1; i <= n; ++i)
        perm += to_string(i);
    do perms.pb(perm); while (next_permutation(all(perm)));
    int a = 0, b = 0;
    for (string pp : perms) a += (pp < p);
    for (string pp : perms) b += (pp < q);
    cout << abs(a-b) << '\n';
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

