#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#pragma GCC optimize(3, "Ofast", "inline")
typedef vector<int> vi;
const int INF = 2e9;
#define yesnosolve cout << (solve() ? "NO" : "YES") << endl

char q1(int pos)
{
    string c;
    cout << "? 1 " << pos + 1 << endl
         << flush;
    cin >> c;
    return c[0];
}

int q2(int pos1, int pos2)
{
    int ans;
    cout << "? 2 " << pos1 + 1 << ' ' << pos2 + 1 << endl
         << flush;
    cin >> ans;
    return ans;
}

void solve()
{
    int len;
    cin >> len;
    vector<char> res(len, '?');

    res[0] = q1(0);
    // cerr << res[0] << endl
    //      << flush;
    // cerr << len << '-' << endl;
    for (int i = 1; i < len; i++)
    {
        // cerr << i << '-' << endl;
        set<char> st;
        bool f = false;
        for (int j = i - 1; j >= 0; j--)
        {
            st.insert(res[j]);
            if (q2(j, i) == int(st.size()))
            {
                res[i] = res[j];
                f = true;
                break;
            }
        }

        if (!f)
            res[i] = q1(i);

        // cerr << i << '-' << endl;
    }

    cout << "! ";
    for (auto &a : res)
        cout << a;
    cout << endl
         << flush;
}

int main()
{
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    // ios_base::sync_with_stdio(0);

    // int T;
    // cin >> T;
    // while (T--)
    solve();

    return 0;
}
