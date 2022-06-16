#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")
typedef vector<int> vi;
const int INF = 2e9;
#define yesnosolve cout << (solve() ? "NO" : "YES") << endl;
typedef unsigned long long ull;

void solve()
{
    int n, k;
    cin >> n >> k;
    vi g(n);
    for (int i = 0; i < n; i++)
        cin >> g[i];

    multiset<int> st;

    ull ans = 0;
    for (auto &a : g)
        ans += a / k, st.insert(a % k);

    while (!st.empty())
    {
        auto t = *st.begin();
        st.erase(st.begin());

        auto it = st.lower_bound(k - t);
        if (it != st.end())
            ans++, st.erase(it);
    }

    cout << ans << endl;
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
