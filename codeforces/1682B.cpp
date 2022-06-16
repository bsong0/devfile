#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define ll long long
#define endl "\n"
#pragma GCC optimize(3,"Ofast","inline")

// const int N = 1e5+10;

// int q[N];

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int m;
    cin>>m;
    while(m--)
    {
        int n, res=INT_MAX, tmp;
        cin>>n;
        for (int i = 0; i<n; i++)
        {
            cin>>tmp;
            if (tmp != i) res &= tmp;
        }
        // for (int i = 0; i<n; i++) if (q[i] != i) res&=q[i];
        cout<<res<<endl;
    }
    return 0;
}