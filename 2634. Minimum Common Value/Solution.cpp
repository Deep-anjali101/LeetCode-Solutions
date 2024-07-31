class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
         
           int i = 0, j = 0;
        int min=INT_MAX;
        while(i<nums1.size() && j < nums2.size()) {
            if(nums1[i]==nums2[j]){
                    min=nums2[j];
                break;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else j++;
            
        
        }

         return min != INT_MAX ? min : -1;
    }
};