class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> same_anagram;

        for(string str:strs) {
            string key=str;
            sort(key.begin(),key.end());
            same_anagram[key].push_back(str);
        }

        vector<vector<string>> ans;

        for(auto entry: same_anagram) {
            ans.push_back(entry.second);
        }
        return ans;
    }
};
