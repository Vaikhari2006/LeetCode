class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        
        unordered_map<int,int> mp;

        for(int x: nums){
                mp[x]++;
            }

        if(k==n){
           sort(nums.begin(),nums.end());
           return nums[n-1];
           
        }
        if(k==1){
            sort(nums.begin(),nums.end());
            for(int i=n-1;i>=0;i--){
                if(mp[nums[i]]==1) return nums[i];
            }
            
        }
        if(k>1 && k<n){
            if(mp[nums[0]]==1 && mp[nums[n-1]]==1){
                return nums[0]>nums[n-1]? nums[0]:nums[n-1];
            }
            if(mp[nums[0]]==1 || mp[nums[n-1]]==1){
                if(mp[nums[0]]==1) return nums[0];
                else return nums[n-1];
            }

        }
        
        return -1;
    }
};