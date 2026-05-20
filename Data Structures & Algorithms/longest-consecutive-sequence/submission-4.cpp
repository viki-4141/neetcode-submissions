class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> number(nums.begin(),nums.end());
        int prev_count = 0;
        for (auto num : number)
        {
            if(number.find(num-1)==number.end())
            {
                int startnum = num;
                int current_count = 1;
                while(number.find(startnum+1)!=number.end())
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
