#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 20, vector<int>(m + 20, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i+10][j+10];
    vector<int> res(3 * n + 10), resdg(3 * n + 10);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            res[i - j + n + 5] += v[i+10][j+10];
            resdg[i + j] += v[i+10][j+10];
        }

    auto mp = max_element(res.begin(), res.end()), mdgp = max_element(resdg.begin(), resdg.end());
    auto maxpos = mp - 5 - n - res.begin(), maxposdg = mdgp - resdg.begin();
    cout << *mp + *mdgp - v[((maxposdg - maxpos) >> 1) + 10][((maxpos + maxposdg) >> 1) + 10] << endl;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}