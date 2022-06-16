#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")

void solve()
{
    int n, cost;
    string s;
    cin >> n >> cost >> s;

    auto cnt = count(s.begin(), s.end(), '1');

    if (cnt == 0)
    {
        cout << "0" << endl;
        return;
    }

    int first = 0, last = n - 1;
    while (s[first] == '0')
        first++;
    while (s[last] == '0')
        last--;
    auto su = 11 * cnt;
    if (cost >= first + n - 1 - last && first != last)
        su -= 11;
    else if (cost >= n - 1 - last)
        su -= 10;
    else if (cost >= first)
        su -= 1;

    cout << su << endl;
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