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
    string sa,sb,sc;
    cin >> sa >> sb >> sc;
    vector<queue<char>> cards(3);
    for (char c : sa) cards[0].push(c);
    for (char c : sb) cards[1].push(c);
    for (char c : sc) cards[2].push(c);
    int turn = 0; // alice
    while (!cards[turn].empty()) {
        char c = cards[turn].front();
        cards[turn].pop();
        turn = c-'a';
    }
    cout << char('A'+turn) << '\n';
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

