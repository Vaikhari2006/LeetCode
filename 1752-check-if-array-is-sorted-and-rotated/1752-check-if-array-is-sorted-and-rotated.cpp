class Solution {
public:
    bool check(vector<int>& nums) {
       int n=nums.size();
        int count=0;

        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]) count++;
        }

        // for(int i=1;i<n;i++){
        //     if(nums[i]==nums[i-1] || nums[i]==nums[i-1]+1);
        //     else count++;
        // }
        return count<=1;
    }
};