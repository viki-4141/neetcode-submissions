class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalProduct = 1;
        int zeroCount = 0;
        for (int x : nums) {
            if (x == 0) zeroCount++;
            else totalProduct *= x;
        }

        vector<int> out;
        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount > 1) {
                out.push_back(0);
            } else if (zeroCount == 1) {
                out.push_back(nums[i] == 0 ? totalProduct : 0);
            } else {
                out.push_back(totalProduct / nums[i]);
            }
        }

        return out;
    }
};
