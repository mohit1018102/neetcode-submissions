class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> is_present;

        for(int i=0;i<nums.size();i++) {
            int required = target-nums[i];
            if(is_present.find(required)!=is_present.end()) {
                return {is_present[required], i};
            }
            is_present[nums[i]] = i;
        }
        return {0,0};
    }
};
