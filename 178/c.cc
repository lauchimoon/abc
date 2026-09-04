#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;
const ll MOD = 1e9+7;

ll add(ll a, ll b)
{
    a += b;
    if (a >= MOD)
        a -= MOD;
    return a;
}

ll sub(ll a, ll b)
{
    a -= b;
    if (a < 0)
        a += MOD;
    return a;
}

ll mul(ll a, ll b) { return (a * b)%MOD; }

ll fpow(ll a, ll b)
{
    ll res = 1;
    a %= MOD;
    while (b > 0) {
        if (b&1)
            res = mul(res, a);

        a = mul(a, a);
        b /= 2;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    cout << sub(fpow(10,n), sub(mul(2,fpow(9,n)),fpow(8,n))) << '\n';
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

