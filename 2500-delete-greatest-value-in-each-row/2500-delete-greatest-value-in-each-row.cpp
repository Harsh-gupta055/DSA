class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum = 0;

    for(int i = 0; i < grid.size(); i++){
        sort(grid[i].begin(), grid[i].end());
    }

    for(int j = 0; j < grid[0].size(); j++){
        int maxi = 0;

        for(int i = 0; i < grid.size(); i++){
            maxi = max(maxi, grid[i][j]);
        }

        sum += maxi;
    }

    return sum;
    }
};