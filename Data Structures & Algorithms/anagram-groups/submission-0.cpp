class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (auto s : strs) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            groups[sorted_s].push_back(s);
        }
        vector<vector<string>> out;
        for (auto const& [key, val] : groups) {
            out.push_back(val);
        }

        return out;
    }
};