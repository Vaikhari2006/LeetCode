class Solution {
public:
    string reverseVowels(string s) {
        string ans="";

        for(char c: s){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E'|| c=='I' || c=='O' || c=='U'){
                ans+=c;
            }
        }

        reverse(ans.begin(),ans.end());
int i=0;
        string final="";
        for(char c: s){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E'|| c=='I' || c=='O' || c=='U'){
                final+=ans[i];
                i++;
            }
            else final+=c;
        }
        return final;
    }
};