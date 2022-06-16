#include <bits/stdc++.h>
using namespace std;

#define PII pair<int, int>
#define INF 0x3f3f3f3f
#define ll long long
#define endl "\n"

const int N = 2*1e5+10;

int grid[N][N];
int rows, columes;

bool issorted(int r)
{
    for (int i = 1; i < columes; i++)
        if (grid[r][i] < grid[r][i-1]) return false;
    return true;
}

void swap_col(int i, int j)
{
    for (int r = 0; r<rows; r++) swap(grid[r][i], grid[r][j]);
}

PII check()
{
    for (int i = 0; i<rows; i++)
    {
        if (!issorted(i))
        {
            if (i > 0) return {-1, -1};

            int l, r;
            for (int c = 0; c<columes; c++)
            {
                if (grid[i][c] < grid[i][c-1])
                {
                    if (l == -1) l = c;
                    else if (r == -1) r = c;
                    else return {-1, -1};
                }

                swap()
            }
        }
    }
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    int cases;
    cin>>cases;
    while(cases--)
    {
        cin >> rows >> columes;

        for (int r = 0; r < rows; r++)
            for (int c = 0; c<columes; c++)
                cin>>grid[r][c];
        
        auto p = check();
    }
}