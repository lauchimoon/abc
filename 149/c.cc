#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

const int INF = 1e5+5;

vector<bool> sieve(int n)
{
    vector<bool> prime(n+1, true);
    vector<int> primes;
    for (int p = 2; p*p <= n; ++p) {
        if (!prime[p])
            continue;
        for (int i = p*p; i <= n; i += p)
            prime[i] = false;
    }
    return prime;
}

void solve()
{
    int x;
    cin >> x;
    vector<bool> primes = sieve(INF);
    for (int i = x; i <= INF; ++i)
        if (primes[i] && i >= x) {
            cout << i << '\n';
            return;
        }
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

