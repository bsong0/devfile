#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")
typedef vector<int> vi;
typedef unsigned long long ull;
const int INF = 2e9;
#define yesnosolve cout << (solve() ? "NO" : "YES") << endl

void solve()
{
    int n, m;
    cin >> n >> m;
    int s = 0;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        s += tmp;
    }
    cout << max(0, s - m) << endl;
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
