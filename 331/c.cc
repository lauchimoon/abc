#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<long long,long long>;
using ll = long long;

template <typename T>
void printvec(vector<T> v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i+1 == v.size()];
}

void solve()
{
    int n;
    cin >> n;
    vector<ii> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(all(a), [](ii aa, ii bb){ return aa.first > bb.first; });
    ll sum = 0;
    ll curr = 0;
    for (int i = 0; i < n; ++i) {
        auto [x, k] = a[i];
        if (i > 0 && x != a[i-1].first) {
            sum += curr;
            curr = 0;
        }
        b[k] = sum;
        curr += x;
    }
    printvec(b);
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

