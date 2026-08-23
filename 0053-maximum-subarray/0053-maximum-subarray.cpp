class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();

        if(n==1) return nums[0];

        int s=0;
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            s+=nums[i];

            if(s>maxi) maxi=s;

            if(s<0) s=0;
        }
        return maxi;
    }
};