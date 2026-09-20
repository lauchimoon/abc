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
    int a, b;
    cin >> a >> b;
    if ((a == 1 && b == 2) || (a == 2 && b == 1))
        cout << 3;
    else if ((a == 1 && b == 3) || (a == 3 && b == 1))
        cout << 2;
    else if ((a == 2 && b == 3) || (a == 3 && b == 2))
        cout << 1;
    cout << '\n';
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

