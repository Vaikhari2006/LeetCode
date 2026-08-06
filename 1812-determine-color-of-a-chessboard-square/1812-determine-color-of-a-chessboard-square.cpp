class Solution {
public:
    bool squareIsWhite(string c) {
        bool col=false;
        if(c[0]=='b' || c[0]=='d' || c[0]=='f' || c[0]=='h'){
            col=true;
        }
        bool row=false;
        int r=c[1]-'0';
        if(r%2==0){
            row=true;
        }
        return col^row;
    }
};