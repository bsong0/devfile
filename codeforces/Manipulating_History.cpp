#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")
typedef vector<int> vi;

void solve()
{
    int n;
    cin >> n;
    vector<string> seq(n * 2);
    vector<bool> state(n * 2);
    for (int i = 0; i < n; i++)
        cin >> seq[2 * n] >> seq[2 * n + 1];
    string st;
    cin>>st;
    function<int(string)> dfs = [&](string s)
    {
        for (int i = 0; i < seq.size(); i++)
        {
            if (state[i])
                continue;
            for (int j = 0; j < seq.size() && j != i; j++)
            {
                if (state[j])
                    continue;
                string tmp = s;
                replace(tmp.begin(), tmp.end(), seq[i], seq[j]);
                if (tmp.length() == 1) 
                {
                    cout<<tmp<<endl;
                    return 1;
                }
                if (s == tmp) break;
                state[i] = 1, state[j] = 1;
                if (dfs(tmp)) return 1;
                state[i] = 0, state[j] = 0;
            }
        }
        return 0;
    };
    dfs(st);
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(0);

    int T;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
