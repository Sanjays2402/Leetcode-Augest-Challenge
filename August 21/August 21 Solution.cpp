class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        vector<int> result(A.size());
        int k=0;
        
        for(int i: A)
        {
            if(i%2==0)
                result[k++]=i;
        }
        int ct=k;
        for(int i: A)
        {
            if(i%2==1)
                result[k++]=i;
        }
        
        return result;
    }
};
