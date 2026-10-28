class Solution {
public:
    bool isAnagram(string s, string t) {
        int sSize = s.size();
        int tSize = t.size();
        if(sSize != tSize)
            return false;
        if(sSize == 0 && tSize == 0)
            return true;
        unordered_map<char,int> charMap;
        for(const char &c: s){
            charMap[c]++;
        }
        for(const char &c:t){
            if(charMap.find(c) == charMap.end())
                return false;
            charMap[c]--;
            if(charMap[c]==0)
                charMap.erase(c);
        }
        if(charMap.size() > 0)
            return false;
        return true;
    }
};
