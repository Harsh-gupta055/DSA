class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
         sort(coins.begin(), coins.end());
        int x = 0;
        for(int i = 0; i < coins.size(); i++) {
            if(coins[i] > x + 1)
                break;
            x += coins[i];
        }
        return x + 1;
    }
};