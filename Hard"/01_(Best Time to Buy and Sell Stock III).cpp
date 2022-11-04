/*Example 1:

Input: prices = [3,3,5,0,0,3,1,4]
Output: 6
Explanation: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.

Example 2:

Input: prices = [1,2,3,4,5]
Output: 4
Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are engaging multiple transactions at the same time. You must sell before buying again.

Example 3:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transaction is done, i.e. max profit = 0.

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit1=0;
        int minSoFar1=prices[0];
        int maxprofit2=0;
        int minSoFar2=prices[0];
        for(int i=0;i<n;i++){
            minSoFar1=min(minSoFar1,prices[i]);
            int profit1=prices[i]-minSoFar1;
            maxprofit1=max(maxprofit1,profit1);
            
            minSoFar2=min(minSoFar2,prices[i]-maxprofit1);
            int profit2=prices[i]-minSoFar2;
            maxprofit2=max(maxprofit2,profit2);
            
        }
        return maxprofit2;      //Time Complexity-O(N)
                                //space complexity-O(1)
        
    }
};
