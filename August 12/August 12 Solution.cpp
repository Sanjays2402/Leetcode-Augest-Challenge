class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> val(rowIndex+1);
        val[0]=1;
        for(int i=0; i<=rowIndex; i++)
        {
            for(int j=i; j>0; j--)
            {
                val[j] = val[j] + val[j-1];
            }
        }
        
        return val;
    }
};
