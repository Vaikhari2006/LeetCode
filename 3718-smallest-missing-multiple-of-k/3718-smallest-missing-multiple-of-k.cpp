class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();

        unordered_map<int,int> mp;

        for(int x: nums){
            mp[x]++;
        }

        int m=k;

        while(mp.count(m)) {
            m+= k;
        }

        return m;
    }
};