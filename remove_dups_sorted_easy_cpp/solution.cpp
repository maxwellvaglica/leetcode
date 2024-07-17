class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> used = {};
        int unique = 0;

        for (int i: nums){
            bool is_used = false;
            for (int u: used) {
                if (i == u) {
                    is_used = true;
                    break;
                }
            }
            if (is_used == false){
                unique++;
                used.insert(used.end(), i);
                }
            }
        nums.clear();
        for (int i: used){
            nums.insert(nums.end(), i);
        }
        return unique;
        }
};
