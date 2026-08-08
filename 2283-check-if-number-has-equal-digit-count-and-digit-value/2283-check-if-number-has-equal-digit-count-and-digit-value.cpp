class Solution {
public:
    bool digitCount(string num) {
        int n=num.size();
        unordered_map<int,int> mp;

        for(char c: num){
            mp[c-'0']++;
        }

        
        for(int i=0;i<n;i++){
            if(num[i]-'0'!=mp[i]){
                return false;
            }
        }
        return true;

    }
};