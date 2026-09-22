#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define rdv(a,n) for (auto &x : a) cin >> x;
#define mp make_pair
#define pb push_back
using ii = pair<int,int>;
using ll = long long;

bool p(const string &s)
{
    int n = s.size();
    for (int i = 0; i < n/2; ++i)
        if (s[i] != s[n-i-1])
            return false;
    return true;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    cout << ((p(s) && p(s.substr(0,(n-1)/2)) && p(s.substr((n+2)/2,n)))? "Yes" : "No") << '\n';
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

