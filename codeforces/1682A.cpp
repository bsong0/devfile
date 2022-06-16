#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define ll long long
#define endl "\n"

bool is_p(string s, int l)
{
    for (int i = 0; i < l/2; i++){
        if (s[i] != s[l - i - 2])
            return false;
    }
    return true;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int m;
    cin >> m;
    while (m--)
    {
        string s;
        int cnt = 0, l;
        cin >> l >> s;
        int mid = l/2;
        auto mid_char = s[mid];
        while (s[mid] == mid_char)
        {
            mid--, cnt++;
        }
        // if (l % 2 == 0) cout<<(cnt-1)*2<<endl;
        // else cout<<cnt*2-1<<endl;
        cout<<(cnt-1) * 2 + !(l%2==0)<<endl;
    }
}