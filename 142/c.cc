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
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i+1 == v.size()];
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), ans(n);
    rdv(a,n);
    for (int i = 0; i < n; ++i)
        ans[a[i]-1] = i+1;
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

