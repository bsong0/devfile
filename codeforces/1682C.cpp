#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define ll long long
#define endl "\n"
typedef pair<int, int> PII;
#pragma GCC optimize(3,"Ofast","inline")

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin>>n;
        unordered_map<int, int> m;
        int tmp;
        for (int i = 0; i<n; i++) cin>>tmp, m[tmp]++;
        int s = 0, t = 0;
        for (auto a: m) if (a.second == 1) s++; else t++;
        cout<<t+(s+1)/2<<endl;
    }
    return 0;
}