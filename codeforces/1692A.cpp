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
    int n, tmp;
    cin >> n;
    ull c = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> tmp;
        if (tmp > n)
            c++;
    }
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
