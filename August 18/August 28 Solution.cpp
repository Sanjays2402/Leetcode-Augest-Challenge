class Solution {
public:
    int bsearch(vector<pair<pair<int, int>, int>>& sorted, int x)
    {
        int n = sorted.size();
        if(sorted[n-1].first.first < x)
            return -1;
        
        int l=0, r=n-1;
        while(l <= r)
        {
            int m = l+(r-l)/2;
            if(sorted[m].first.first >= x)
                r = m-1;
            else
                l = m+1;
        }
        
        return sorted[l].second;
    }
    
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        vector<pair<pair<int, int>, int>> sorted;
        
        for(int i=0; i<n; i++)
            sorted.push_back({{intervals[i][0], intervals[i][1]}, i});
        
        sort(sorted.begin(), sorted.end());
        vector<int> result(n, -1);
        
        for(int i=0; i<n; i++)
            result[i] = bsearch(sorted, intervals[i][1]);
        
        return result;
    }
};
