class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int end=nums.size()-1;
    int st=0;
    while(end>=st){
        int mid=st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
       return st;
    }
};