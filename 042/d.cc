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
const int MAXN = 1e6+5;

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

ll divide(ll a, ll b) { return mul(a, fpow(b, MOD - 2)); }

vector<ll> fact, inv_fact;
void init_fact(int n)
{
    fact.assign(n+1, 1);
    inv_fact.assign(n+1, 1);
    for (int i = 1; i <= n; ++i)
        fact[i] = mul(fact[i-1], i);

    inv_fact[n] = divide(1, fact[n]);
    for (int i = n; i > 0; --i)
        inv_fact[i-1] = mul(inv_fact[i], i);
}

ll comb(ll n, ll k)
{
    if (k < 0 || k > n)
        return 0;
    return mul(fact[n], mul(inv_fact[k], inv_fact[n-k]));
}

void solve()
{
    init_fact(MAXN);
    ll h,w,a,b;
    cin >> h >> w >> a >> b;
    ll total = comb(h+w-2,h-1);
    ll no = 0;
    for (ll i = 1; i <= b; ++i)
        no = add(no, mul(comb(h-a+i-2,i-1), comb(a+w-i-1,w-i)));
    cout << sub(total,no) << '\n';
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

