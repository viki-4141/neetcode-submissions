class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> number;
        int prev_count = 0;
        for(auto i : nums)
        {
            number.insert(i);
        }
        for (auto num : number)
        {
            if(!number.count(num-1))
            {
                int startnum = num;
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
