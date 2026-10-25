class Solution {
public:

    string encode(vector<string>& strs) {
         string send;

         for(auto &str:strs) {
            send.append(to_string(str.size())+"#"+str);
         }
        return send;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;

        while(i<s.size()){
            string size;
            while(s[i] != '#') {
                size.push_back(s[i]);
                i++;
            }
            i++; // skip '#'
            int len = stoi(size);
            string sub_string = s.substr(i, len);
            i += len;
            ans.push_back(sub_string);
        }
       return ans;
    }
};
