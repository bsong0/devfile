#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")

void solve()
{
    int n, rn;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> rn;
    ll s = 0;
    int tmp;
    for (int i = 0; i < rn; i++)
        cin >> tmp, s += tmp;

    s %= n;
    cout << v[s] << endl;
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