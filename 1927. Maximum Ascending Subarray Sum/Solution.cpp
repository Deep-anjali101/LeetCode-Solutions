class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size(), maxi=0;
        int j=0,i=0, sum=0;

        while(j<n){
           
            if(j>0 && nums[j-1]>=nums[j]){
             sum=0;
            }
             sum+=nums[j];
            maxi=max(maxi,sum);
        j++;
        }
        return maxi;
    }
};