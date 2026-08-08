class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        
        for(int i=left;i<=right;i++){
            int temp=i;
            bool v=true;

            while(temp){
                int digit=temp%10;
                temp=temp/10;
                if(digit==0  ||  i % digit != 0){
                    v=false;
                    break;
                    
                }
            }
            if(v)
            arr.push_back(i);

        }
        return arr;
    }
};