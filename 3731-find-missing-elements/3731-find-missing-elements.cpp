class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> num;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            while(nums[i]!=nums[i-1]+1){
                num.push_back(nums[i-1]+1);
                nums[i-1]++;
            }
        }
        return num;
    }
};