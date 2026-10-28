class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
          sort(costs.begin(), costs.end());

        int count = 0;
        int sum = 0;

        for(int i = 0; i < costs.size(); i++) {
            count += costs[i];

            if(count <= coins) {
                sum++;
            }
            else {
                break;
            }
        }

        return sum;
       
    }
};