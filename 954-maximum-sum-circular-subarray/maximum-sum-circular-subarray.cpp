class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=nums[0];
        int best=nums[0], max1=nums[0];
        int worst=nums[0], min1=nums[0];
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            int a=nums[i]+best;
            int b=nums[i];
            int c=nums[i]+worst;
            best=max(a,b);
            max1=max(best,max1);
            worst=min(b,c);
            min1=min(worst,min1);
            
        }
        if(max1<0){
            return max1;
        }
        return max(max1,sum-min1);
    }
};