class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr_win_sum=0;
        for(int i=0;i<k;i++) {
            curr_win_sum += nums[i];
        }
        double max_sum=curr_win_sum;
        for(int i=k;i<nums.size();i++) {
            curr_win_sum+=nums[i]-nums[i-k];
            max_sum = max(max_sum, curr_win_sum);
        }
        return max_sum / k;
    }
};
