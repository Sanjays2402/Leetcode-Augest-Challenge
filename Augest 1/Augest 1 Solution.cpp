class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int count=0;
        for(char a: word)
            if(isupper(a))
                count++;
        
        if(count==word.length() || (count==1 && isupper(word[0])) || count==0)
            return true;
        
        return false;
        
    }
};
