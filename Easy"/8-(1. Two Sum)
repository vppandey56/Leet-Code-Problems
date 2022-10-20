class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            if(mpp.find(target-nums[i]) != mpp.end()){
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]]=i;         // time comp- o(n) and space comp-o(n)
        }
        return ans;
        
    }
};

//2nd approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        //int size=nums.size();
        for(int i = 0; i < nums.size() - 1; i++)
        {
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
            }
        }
        return ret;
        
    }
};
