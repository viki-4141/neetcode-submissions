class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> number;
        int prev_count = 0;
        for(auto i : nums)
        {
            number.insert(i);
        }
        for (int i=0;i<nums.size();i++)
        {
            if(!number.count(nums[i]-1))
            {
                int startnum = nums[i];
                int current_count = 1;
                while(number.count(startnum+1))
                {
                    current_count++;
                    startnum++;
                }
                if(current_count>prev_count)
                {
                    prev_count = current_count;
                }
            }
        }
        return prev_count;
    }
};
