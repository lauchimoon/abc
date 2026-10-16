#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

int idx(int i, int n, bool flipped)
{
    return (!flipped)? i : ((i<n)? i+n : i-n);
}

void solve()
{
    int n,q;
    string s;
    cin >> n >> s >> q;
    bool flip = false;
    while (q--) {
        int t,a,b;
        cin >> t >> a >> b;
        if (t==1)
            swap(s[idx(a-1,n,flip)],s[idx(b-1,n,flip)]);
        else if (t==2)
            flip = !flip;
    }
    if (flip)
        s = s.substr(n)+s.substr(0,n);
    cout << s << '\n';
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

