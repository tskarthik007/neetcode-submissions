class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> map;
        for(int num : nums){
            if(map.count(num))
                return true;
            map.insert(num);
        }
        return false;
    }
};
