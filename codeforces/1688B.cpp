#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")
typedef vector<int> vi;

void solve()
{
    int ans = 0;
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int last = 1e9;
    for (auto a : v)
    {
        int tmp = 0;
        while (!(a & 1))
            a >>= 1, tmp++;
        last = min(last, tmp);
    }

    for (auto a : v)
    {
        int tmp = 0;
        while (!(a & 1))
            a >>= 1, tmp++;
        if (tmp != last)
            ans++;
        else
            ans += last;
    }
    cout << ans << endl;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
