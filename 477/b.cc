#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

template <typename T>
void printvec(vector<T> v)
{
    int n = v.size();
    if (n==0)
        cout << '\n';
    for (int i = 0; i < n; ++i)
        cout << v[i] << " \n"[i+1 == v.size()];
}

void solve()
{
    int n,d;
    cin >> n >> d;
    vector<int> x(n);
    rdv(x,n);
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        bool ok = true;
        for (int j = 0; j < n; ++j)
            if (i!=j && abs(x[i]-x[j]) < d) {
                ok = false;
                break;
            }
        if (ok) ans.pb(i+1);
    }
    cout << ans.size() << '\n';
    printvec(ans);
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

