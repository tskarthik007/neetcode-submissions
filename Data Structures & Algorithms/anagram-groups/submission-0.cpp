class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        
        for(const string s: strs){
            vector<int> encoding(26,0);

            for(const char c: s)
                encoding[c - 'a']++;

            string encodedStr = "";

            for(const int n: encoding){
                encodedStr += ',' + to_string(n);
            }

            map[encodedStr].push_back(s);
        }

        vector<vector<string>> result;

        for(const auto& pair: map)
            result.push_back(pair.second);

        return result;
    }

};
