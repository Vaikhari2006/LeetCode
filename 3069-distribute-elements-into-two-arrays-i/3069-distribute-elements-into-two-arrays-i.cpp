class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();

        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for(int i=2;i<n;i++){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
            
            
        }

        
        int m=arr1.size();
        int k=arr2.size();
        vector<int> result;
        for(int i=0;i<m;i++){
            result.push_back(arr1[i]);
        }
        for(int i=0;i<k;i++){
            result.push_back(arr2[i]);
        }
        return result;
    }
};