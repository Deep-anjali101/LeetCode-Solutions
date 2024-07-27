class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool flag = false;

        if (arr.size() < 3)
            return false;

        else {
            for (int i = 0; i < arr.size(); i++) {

                if (i == arr.size() - 1) {
                    if (arr[i] % 2 != 0 && arr[i - 1] % 2 != 0) {
                        if (arr[i-2] % 2 != 0)
                            flag = true;
                    }
                }  else if (i == arr.size() - 2) {
                    if (arr[i] % 2 != 0 && arr[i - 1] % 2 != 0) {
                        if (arr[i+1] % 2 != 0)
                            flag = true;
                    }
                } else if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0) {
                    if (arr[i + 2] % 2 != 0)
                        flag = true;
                }
            }
            return flag;
        }
    }
};