#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), res(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n % 2)
    {
        cout << "NO" << endl;
        return;
    }

    sort(v.begin(), v.end());
    int cnt = n / 2, tmp = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            res[i] = v[tmp++];
        else
            res[i] = v[cnt++];
    }

    cout<<"dbg ";
    for (auto a: res) cout<<a<<' ';
    cout<<"end"<<endl;
    
    for (int i = 1; i < n - 1; i++)
        if (res[i] == res[i - 1] || res[i] == res[i+1])
        {
            cout << "NO" << endl;
            return;
        }
    if (res[n-1] == res[0])
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (auto a : res)
        cout << a << ' ';
    cout << endl;
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