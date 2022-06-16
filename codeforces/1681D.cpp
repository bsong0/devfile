// testcase: 19 20753
#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")

void solve()
{
    ull n, x;
    cin >> n >> x;

    // unordered_map<ull, int> dist;
    map<ull, int> dist;
    queue<ull> q;
    dist[x] = 0;
    q.push(x);
    while (!q.empty())
    {
        auto k = q.front();
        q.pop();
        string s = to_string(k);
        if (s.size() == n)
        {
            cout << dist[k] << endl;
            return;
        }

        for (auto a : s)
        {
            if (a == '0')
                continue;
            ull w = k * (a - '0');
            if (!dist.count(w))
            {
                dist[w] = dist[k] + 1;
                q.push(w);
            }
        }
    }

    cout << -1 << endl;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    solve();

    return 0;
}