#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")

const int N = 1e5 + 10;

int a[N], q[N];

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> q[i];

    vector<pii> res;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i] < a[j] || (a[i] == a[j] && q[i] < q[j]))
                res.push_back({i, j}), swap(a[i], a[j]), swap(q[i], q[j]);
    assert(is_sorted(a, a + n));
    if (is_sorted(q, q + n))
    {
        cout << res.size() << endl;
        for (const auto &at : res)
            cout << at.first + 1 << ' ' << at.second + 1 << endl;
    }
    else
        cout << "-1" << endl;
    return;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

