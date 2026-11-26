class Solution {
public:
    bool canAliceWin(int n) {
        int i = 0 ;
        while(i<=10){
            if(n-(10-i)<0){
            if(i%2==0){
                return false;
            }else {
                return true;
            }
            }
            n=n-(10-i);
            i++;
        }
        return true;
    }
};