class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string rev="";
        string ans="";

        for(int i=n-1;i>=0;i--){
            
            if(isalnum(s[i])){
                rev+=s[i];
            }

            else{
                if(!rev.empty()){
                    reverse(rev.begin(),rev.end());

                    if(!ans.empty()){
                        ans+=" ";
                    }
                    ans+=rev;
                    rev="";
                }
                
            }
        }

        if(!rev.empty()){
            reverse(rev.begin(),rev.end());

            if(!ans.empty()) ans+=" ";

            ans+=rev;
        }
        return ans;



       
    }
};