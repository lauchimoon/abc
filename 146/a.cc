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
    map<string,int> m;
    m["SUN"] = 7; m["MON"] = 6;
    m["TUE"] = 5; m["WED"] = 4;
    m["THU"] = 3; m["FRI"] = 2;
    m["SAT"] = 1;
    cout << m[s] << '\n';
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

