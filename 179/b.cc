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
    int n;
    cin >> n;
    bool flag = false;
    int t = 0;
    for (int i = 0; i < n; ++i) {
        int d1,d2;
        cin >> d1 >> d2;
        if (d1==d2) {++t; if (t>=3) flag = true;}
        else t = 0;
    }
    cout << (flag? "Yes" : "No") << '\n';
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

