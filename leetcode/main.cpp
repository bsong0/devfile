#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minPathCost(vector<vector<int>> &grid, vector<vector<int>> &moveCost)
    {
        const int N = 60;
        int dist[N][N];
        memset(dist, 0x3f, sizeof dist);
        for (int i = 0; i < grid[0].size(); i++)
            dist[0][i] = grid[0][i];
        for (int j = 0; j < grid.size() - 1; j++)
            for (int i = 0; i < grid[0].size(); i++)
                for (int k = 0; k < grid[0].size(); k++)
                {
                    dist[j + 1][k] = min(dist[j + 1][k], dist[j][i] + moveCost[grid[i][j]][k]);
                }

        return dist[grid.size()][grid[0].size()];
    }
};