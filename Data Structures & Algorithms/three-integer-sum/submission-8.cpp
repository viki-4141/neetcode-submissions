class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> out;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size();i++)
        {
            for(int j=i+1; j<nums.size();j++)
            {
               for(int k=j+1; k<nums.size();k++)
                {
                    int sum = nums[i]+nums[j]+nums[k];
                    if(sum == 0)
                    {
                        out.insert({nums[i],nums[j],nums[k]});
                    
                    }
                }
            }
        }
        return vector<vector<int>>(out.begin(), out.end());
    }
};
