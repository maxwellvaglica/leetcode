class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        bool found = false;
        for (int i = 0; i < nums.size(); i++){
            if (found == true){
                break;
            }
            for (int j = 0; j < nums.size(); j++){
                if (i != j and nums[i] + nums[j] == target){
                    out.insert(out.end(), j);
                    out.insert(out.begin(), i);
                    found = true;
                    break;
                }
            }
        }
    return out;
    }
};
