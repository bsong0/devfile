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
        for (int i = 1; i<=strength.size(); i++) s[i] = strength[i] + s[i-1];
        for (int i = 1; i <= strength.size(); i++)
        {
            ll tmp = 0;
            for (int j = 0; j + i <= strength.size(); j++)
            {
                tmp += (get(j, j+i-1)) * min(mi[j][i%2 - 1], strength[i+j-1]);
            }
            res += tmp;
            res %= MOD;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> v{1,3,1,2};
    s.totalStrength(v);
    return 0;
}