class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> occurence;
        vector<pair<int,int>> seq;

        for(auto &num:nums) {
            occurence[num]++;
        }
        vector<int> ans;
        for(auto &[key,value]:occurence) {
             seq.push_back({value,key});
        }
        
        sort(seq.begin(),seq.end(), [](pair<int,int> a, pair<int,int> b){
            if(a.first>b.first) return true;
            return false;
        });


        for(int i=0;i<k && i<seq.size();i++) ans.push_back(seq[i].second);

        return ans;
    }
};
