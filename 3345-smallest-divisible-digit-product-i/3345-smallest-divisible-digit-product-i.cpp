class Solution {
public:
    int smallestNumber(int n, int t) {
        

        for(int i=n;i<=n+10;i++){
            int pr=1;
            int temp=i;

            while(temp>0){
                int digit=temp%10;
                pr*=digit;
                temp/=10;
            }
            if(pr%t==0) return i;
            
        }
        return -1;
    }
};