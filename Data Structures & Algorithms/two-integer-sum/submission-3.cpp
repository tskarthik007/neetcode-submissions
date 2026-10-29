class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numIndexMap;
        for(int i=0; i < nums.size(); i++){
            int searchNum =target+(-1*nums[i]);
            if(numIndexMap.find(searchNum) != numIndexMap.end()){
                vector<int> result = {numIndexMap[searchNum], i};
                sort(result.begin(),result.end());
                return result;
            }
            numIndexMap[nums[i]] = i;
        }
        return {};
    }
};
