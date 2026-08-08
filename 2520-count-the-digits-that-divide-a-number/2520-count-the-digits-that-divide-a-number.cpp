class Solution {
public:
    int countDigits(int temp) {
        if(temp<9) return 1;
        
        int count=0;
        int num=temp;
        while(num){
            int digit=num%10;
            num=num/10;
            if(temp%digit==0) count++;
        }
        return count;
    }
};