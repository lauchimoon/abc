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
    int n,v;
    cin >> n >> v;
    vector<int> w(n);
    rdv(w,n);
    int ans = 0;
    forn(i,n)
        for (int j = i+1; j < n; ++j)
            for (int k = j+1; k < n; ++k)
                if (i+j+k+3 <= v)
                    ans = max(ans,w[i]+w[j]+w[k]);
    cout << ans << '\n';
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

