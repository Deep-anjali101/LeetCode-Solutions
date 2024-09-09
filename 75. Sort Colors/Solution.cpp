class Solution {
public:

    void sortColors(vector<int>& nums) {
        int min=INT_MAX, n=nums.size();
        for(int i=0;i<=n-2;i++){
             min=i;
            for(int j=i;j<=n-1;j++){
                if(nums[j]<nums[min]) min=j;
            }

            int temp= nums[min];
            nums[min]=nums[i];
            nums[i]=temp;
        }
    }
};