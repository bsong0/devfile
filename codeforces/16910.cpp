#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")

void solve()
{
    int n, tmp;
    int ec = 0, oc = 0;
    cin>>n;
    for (int i = 0; i<n; i++)
    {
        cin>>tmp;
        if (tmp % 2) oc++;
        else ec++;
    }
    cout<<min(oc, ec)<<endl;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}