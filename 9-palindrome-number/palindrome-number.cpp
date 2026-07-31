class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long long reversed=0;
        if(x<0){
            return false;
        }
        while(x>0){
            reversed = (reversed*10) + (x % 10);
            x /= 10;
        }
        return original == reversed;
    }
};