class Solution {
public:
    bool isPowerOfFour(int num) {
        
        if(num == 0)
            return false;
        
        if(floor(log(num)/log(4)) == ceil(log(num)/log(4)))
            return true;
        
        return false;
    }
};
