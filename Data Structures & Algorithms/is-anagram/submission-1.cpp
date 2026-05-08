class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,int>seen;

        for(int i=0;i<s.size();i++)
        {
            if(seen.find(s[i])!=seen.end())
            {
                seen[s[i]]+=1;
            }
            else
            {
                seen[s[i]] = 1;
            }
        }

        for(int i=0;i<t.size();i++)
        {
            if(seen.find(t[i])!=seen.end())
            {
                if(seen[t[i]]==0)
                { 
                    return false;
                }
                seen[t[i]] -=1;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
