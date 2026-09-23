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
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        if (i+1 < n && s[i] == s[i+1]) {
            cout << i+1 << ' ' << i+2 << '\n';
            return;
        } else if (i+2 < n && s[i] == s[i+2]) {
            cout << i+1 << ' ' << i+3 << '\n';
            return;
        }
    }
    cout << "-1 -1\n";
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

