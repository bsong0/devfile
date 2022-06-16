#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")


void solve()
{
    int x;
    cin >> x;
    int c = __popcount(x);
    if (c > 1)
    {
        int ans = 1;
        while (!(x & 1))
            ans <<= 1, x >>= 1;
        cout<<ans<<endl;
    }
    else if (x == 1)
    {
        cout<<'3'<<endl;
    }
    else
    {
        cout<<x+1<<endl;
    }
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
