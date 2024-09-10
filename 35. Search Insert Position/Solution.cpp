class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1,mid=start+ (end-start)/2, ans=0;
         if(target<nums[0]) return 0;
         if(target>nums[nums.size()-1]) return nums.size();

        else{
            while(start<=end){
                if(nums[mid]==target) return mid;
                if(target<nums[mid]){
                    ans=mid;
                    end=mid-1;
                }

                else if( target>nums[mid]){
                    start=mid+1;
                }
                

                mid= start+(end-start)/2;
            }
        

            return ans;
        }
        
    }

    
};