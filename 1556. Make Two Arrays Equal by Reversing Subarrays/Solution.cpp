class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {

        if (target.size() == arr.size()) {
         bool flag = true;
            
                sort(arr.begin(), arr.end());
               sort(target.begin(), target.end());
                for (int i = 0; i < arr.size(); i++) {
                    if (target[i] != arr[i]) {
                        flag = false;
                    }
                }
            

            return flag;
        }

        return false;
    }
};