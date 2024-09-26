class Solution {
public:
    bool isPalindrome(int x) {
        std::vector<int>digits;
        if(x>=0){
           while(x > 0){
            int digit = x % 10;
            digits.push_back(digit);
            x /= 10;
           }
           std::vector<int>reversed = digits ;
           std::reverse(digits.begin(), digits.end());
           if( reversed == digits){
            return true ;
           }
           else{
            return false;
           }
        }
        else{
            return false ;
        }
    }
};