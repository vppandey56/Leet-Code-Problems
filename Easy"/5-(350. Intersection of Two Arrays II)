//Two pointer approach
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        
        
        vector<int> ans;
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        
        return ans;
        
    }
};

//Map

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;    //element,key
        
        vector<int>ans;   //common element
        
        for(int i=0; i<nums1.size();i++){    //first array it
            m[nums1[i]]++;
        }
        
        for(int i=0; i<nums2.size(); i++){   //second array it
            auto it = m.find(nums2[i]);
            if(it != m.end() && it->second>0){
                ans.push_back(nums2[i]);
                it->second--;
            }
        }
        return ans;
        
    }
};
