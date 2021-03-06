class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> result;
        
        for(int i=0; i<nums.size(); i++)
        {
            int pos=abs(nums[i])-1;
            if(nums[pos]>0)
                nums[pos] *= -1;
            else
                result.push_back(pos+1);
        }
        
        return result;
    }
};
