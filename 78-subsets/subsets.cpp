class Solution {
private:
    void allSS(int i,vector<int>& nums,vector<int>& subset,vector<vector<int>>& superset){
        if(i==nums.size()){
            superset.push_back(subset);
            return;
        }

        //INCLUSION
        subset.push_back(nums[i]);
        allSS(i+1,nums,subset,superset);

        //EXCLUSION
        subset.pop_back();
        allSS(i+1,nums,subset,superset);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> superset;
        vector<int> subset;
        allSS(0,nums,subset,superset);
        return superset;
    }
};