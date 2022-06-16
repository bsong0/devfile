#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(a) (ll) a.size()
#define INF 0x3f3f3f3f
#define LLINF 0x3f3f3f3f3f3f3f3f
#define popcount(x) __builtin_popcountll(x)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define ld long double
#pragma GCC optimize(3, "Ofast", "inline")

const int N = 1e3 + 10;

int as[N], bs[N];

void solve()
{
    int a, b;
    cin >> a;
    for (int i = 0; i < a; i++)
        cin >> as[i];
    cin >> b;
    for (int i = 0; i < b; i++)
        cin >> bs[i];
    int ma = *max_element(as, as+a), mb = *max_element(bs, bs+b);
    if (ma >= mb) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
    if (mb >= ma) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
}

signed main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int _;
    cin >> _;
    while (_--)
        solve();

    return 0;
}