class WordDictionary {
public:
    /** Initialize your data structure here. */
    unordered_map<int,vector<string>> map;
    
    bool check(string a,string b)
    {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]=='.')
                continue;
            else if(a[i]!=b[i])
                return false;
        }
        return true;
    }
    WordDictionary() {}
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        int n=word.size();
        map[n].push_back(word);
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        
        int n=word.size();
        for(string s : map[n])
        {
            if(check(word,s))
                return true;
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
