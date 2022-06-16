#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")
typedef vector<int> vi;
const int INF = 2e9;
#define popcount(x) __builtin_popcount(x)
#define ctz(x) __builtin_ctz(x) // 后导零
#define clz(x) __builtin_clz(x) // 前导零
#define yesnosolve cout << (solve() ? "NO" : "YES") << endl;

const int N = 2e5 + 10;

// int p[N], a[N];

void solve()
{
    string s;
    int n, m;
    cin >> n >> m;
    cin >> s;
    s = ' ' + s;
    vi p(n + 10), a(n + 10);
    for (int i = 1; i <= n; i++)
        if (s[i] == 'B')
            p[i]++;

    for (int i = 1; i <= n + 1; i++)
        a[i] = a[i - 1] + p[i];

    int mi = INF;
    for (int i = 1; i + m <= n + 1; i++)
        mi = min(mi, m - a[i + m - 1] + a[i - 1]);
    cout << mi << endl;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int T;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
