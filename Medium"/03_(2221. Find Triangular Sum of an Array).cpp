/*Example 1:
1 2 3 4 5 
 3 5 7 9
  8 2 6
   0 8
    8


Input: nums = [1,2,3,4,5]
Output: 8
Explanation:
The above diagram depicts the process from which we obtain the triangular sum of the array.

Example 2:

Input: nums = [5]
Output: 5
Explanation:
Since there is only one element in nums, the triangular sum is the value of that element itself.
*/


class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        while(n!=1){
            for(int i=0; i<n-1; i++){
                nums[i]=(nums[i]+nums[i+1])%10;
                
            }
            n--;
        }
        return nums[0];
        
    }
};
