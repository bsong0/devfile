#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")

const int N = 1e5+10;

int a[N], ans[N];

void solve()
{
    int n;
    cin>>n;
    map<int, int> m;
    for (int i = 0; i<n; i++) cin>>a[i], ans[i] = i, m[a[i]]++;
    for (auto p: m)
        if (p.second == 1)
        {
            cout<<"-1"<<endl;
            return;
        }

    for (int i = 1; i<n; i++)
    {
        if (a[i] == a[i-1]) swap(ans[i], ans[i-1]);
    }
    for (int i = 0; i < n; i++) cout<<ans[i] + 1<<' ';
    cout<<endl;
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