#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")
typedef vector<int> vi;
const int INf = 2e9;
#define popcount(x) __builtin_popcount(x)
#define ctz(x) __builtin_ctz(x) // 后导零
#define clz(x) __builtin_clz(x) // 前导零
#define yesnosolve cout << (solve() ? "NO" : "YES") << endl;

void solve()
{
    int n;
    cin >> n;
    vi s(n), f(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        cin >> f[i];

    cout << f[0] - s[0] << ' ';
    for (int i = 1; i < n; i++)
    {
        cout << f[i] - max(s[i], f[i - 1]) << ' ';
    }
    cout << endl;
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
