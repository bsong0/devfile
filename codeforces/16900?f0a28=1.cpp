#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")
typedef vector<int> vi;
#define popcount(x) __builtin_popcount(x)
#define ctz(x) __builtin_ctz(x) // 后导零
#define clz(x) __builtin_clz(x) // 前导零

void solve()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
        cout << n / 3 << ' ' << n / 3 + 1 << ' ' << n / 3 - 1 << endl;
    else if (n % 3 == 1)
        cout << n / 3 << ' ' << n / 3 + 2 << ' ' << n / 3 - 1 << endl;
    else
        cout << (n + 1) / 3 << ' ' << (n + 1) / 3 + 1 << ' ' << n / 3 - 1 << endl;
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
