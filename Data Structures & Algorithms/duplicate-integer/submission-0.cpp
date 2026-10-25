class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> is_present;

        for(auto &num:nums) {
            if(is_present.find(num) != is_present.end()) return true;
            is_present.insert(num);
        }
        return false;
    }
};