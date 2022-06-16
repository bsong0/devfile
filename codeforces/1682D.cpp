#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize(3, "Ofast", "inline")

int c(int x, int &n)
{
    if (x == 0)
        x = n;
    if (x == n + 1)
        x = 1;
    return x;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    s = " " + s;
    if (count(s.begin(), s.end(), '1') % 2 || count(s.begin(), s.end(), '0') == n)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        int rt = 1;
        while (s[c(rt - 1, n)] != '1')
            rt++;
        // construct
        for (int i = 1; i <= n; i++)
        {
            if (i == rt)
                continue;
            cout << i << ' ' << (s[c(i - 1, n)] == '1' ? rt : c(i - 1, n)) << endl;
        }
    }
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