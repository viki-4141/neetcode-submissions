class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> freq;
        vector<int> out;
        for(int i=0;i<nums.size();i++)
        {
            if(freq.find(nums[i]) != freq.end())
            {
                freq[nums[i]]+=1;
            }
            else
            {
                freq[nums[i]]=1;
            }
        }

        for(int i=0;i<k;i++)
        {
            int max = freq.begin()->second;
            int x = freq.begin()->first;
            for(auto const&[key,value] : freq)
            {
                if(value>max)
                {
                    max =value;
                    x=key;
                }
            }
            out.push_back(x);
            freq.erase(x);
        }
        return out;
    }
};
