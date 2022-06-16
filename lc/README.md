```cpp
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
typedef long long ll;
ll s[N];
int mi[N][2];
const int MOD = 1e9+7;

long long get(int l, int r)
{
    return s[r] - s[l-1];
}

class Solution {
public:
    int totalStrength(vector<int>& strength) {
        ll res = 0;
        for (int i = 1; i<=strength.size(); i++) s[i] = strength[i-1] + s[i-1];
        for (int i = 0; i<strength.size(); i++)
            mi[i+1][0] = strength[i];
        for (int i = 1; i <= strength.size(); i++)
        {
            ll tmp = 0;
            for (int j = 0; j + i <= strength.size(); j++)
            {
                auto curmin = min(mi[j+1][i%2 - 1], strength[i+j-1]);
                tmp += (get(j+1, j+i)) * curmin;
                mi[j][i%2] = curmin;
            }
            res += tmp;
            res %= MOD;
        }
        res %= MOD;
        return res;
    }
};

int main()
{
    Solution solution;
    vector<int> v{1,3,1,2};
    cout << solution.totalStrength(v) << endl;
    vector<int> v2{5,4,6};
    cout<< solution.totalStrength(v2)<<endl;
    return 0;
}
```

https://leetcode.cn/contest/weekly-contest-294/problems/sum-of-total-strength-of-wizards/