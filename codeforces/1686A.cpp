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

const int N = 1e2+10;

int a[N];
const double eps = 1e-6;

void solve()
{
    int n;
    cin>>n;
    for (int i = 0; i<n; i++) cin>>a[i];
    double mean = 0;
    for (int i = 0; i<n; i++) mean += a[i];
    mean /= n;
    for (int i = 0; i<n; i++) if (abs(a[i] - mean) < eps) {cout<<"YES"<<endl; return;}
    cout<<"NO"<<endl;
}

signed main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int _;
    cin>>_;
    while(_--)
    {
        solve();
    }

    return 0;
}