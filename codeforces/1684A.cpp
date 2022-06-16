#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define ll long long
#define endl "\n"

int cases;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    cin>>cases;
    while(cases--)
    {
        string s;
        cin>>s;
        auto l = s.size();
        auto m = *min_element(s.begin(), s.end());
        if (l == 2) cout<<s[1]<<endl;
        else cout<<m<<endl;
    }
    return 0;
}