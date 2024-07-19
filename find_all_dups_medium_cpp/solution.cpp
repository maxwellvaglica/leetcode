class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> dups;
        vector<int> used;
        for (int i: nums){
            if (std::find(used.begin(), used.end(), i) != used.end()){
                dups.insert(dups.end(), i);
            }
            else {
                used.insert(used.begin(), i);
            }
        }
        return dups;
    }
};
