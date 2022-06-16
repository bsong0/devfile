#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")
typedef vector<int> vi;
const int INf = 2e9;
#define popcount(x) __builtin_popcount(x)
#define ctz(x) __builtin_ctz(x) // 后导零
#define clz(x) __builtin_clz(x) // 前导零
#define yesnosolve cout << (solve() ? "NO" : "YES") << endl

int solve()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int m = -1;

    for (int i = 0; i < n; i++)
        m = max(a[i] - b[i], m);

    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            if (a[i] > m)
                return 1;
        }
        else
        {
            if (a[i] < b[i] || a[i] - b[i] < m)
                return 1;
        }
    }

    return 0;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int T;
    cin >> T;
    while (T--)
        yesnosolve;

    return 0;
}
