#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")
typedef vector<int> vi;
const int INF = 2e9;
typedef unsigned long long ull;
#define yesnosolve cout << (solve() ? "NO" : "YES") << endl

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ull c = a.size();
    for (int i = 1; i < n; i++)
        if (a[i] == a[i - 1])
            c -= 2;
    cout << c << endl;
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
