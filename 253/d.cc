#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

ll f(ll n)
{
    return n*(n+1)/2;
}

void solve()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll l = lcm(a,b);
    cout << f(n)-a*f(n/a)-b*f(n/b)+l*f(n/l) << '\n';
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

