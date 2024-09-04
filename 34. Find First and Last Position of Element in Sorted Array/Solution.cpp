class Solution {
public:

int lower_bound(vector<int>& nums, int start, int end, int target){
  int ans=-1;
	while(start<=end){
		 int mid = (start + end) >> 1;
            if(nums[mid] >= target){
                ans=mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
         
      return ans;
		
}

int upper_bound(vector<int>& nums, int start, int end, int target){
      int ans=-1;
	while(start<=end){
		 int mid = (start + end) >> 1;
            if(nums[mid] <= target){
                ans=mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
         
      return ans;
		
}




vector<int> searchRange(vector<int>& nums, int target) {
    int start=0, end=nums.size()-1;
    int startingPosition = lower_bound(nums, start, end, target);
    int endPosition = upper_bound(nums, start, end, target);
   if(startingPosition < nums.size() && nums[startingPosition] == target){
            return {startingPosition, endPosition};
        }
   
    return {-1,-1};
    }
};