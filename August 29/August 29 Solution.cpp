// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        static int k=0;
	    return k=(rand7() +k)%10 + 1;
    }
};
