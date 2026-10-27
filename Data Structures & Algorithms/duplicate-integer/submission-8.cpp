class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hmap;
        for(const int& i: nums){
            if(hmap.find(i) != hmap.end()){
                return true;
            }
            hmap[i] = hmap[i]++;
        }
        return false;
    }
};