#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> used = {};
        int unique = 0;

        for (int i: nums){
            std::cout << "starting number " << i << endl;
            std::cout << "checking if " << i << " is in {";
            for (auto i: used) {
                std::cout << i << ' '; // will print: "a b c"
            }
            std::cout << "}" << endl;
            bool is_used = false;
            for (int u: used) {
                if (i == u) {
                    std::cout << i << " does equals ::used:: ->  " << u << endl;
                    is_used = true;
                    std::cout << "is_used is now equal to " << is_used << endl;
                    break;
                }
            }
            if (is_used == false){
                unique++;
                used.insert(used.end(), i);
                std::cout << i << " is not in ::used:: and has been added. Used is now equal to:" << endl;
                for (auto i: used) {
                    std::cout << i << ' '; // will print: "a b c"
                }
                std::cout << endl << endl;
            }
        }
        return unique;
    }
};

int main() {
    vector<int> inp = {0,0,1,1,1,2,2,3,3,4};
    Solution obj;
    int dups = obj.removeDuplicates(inp);

    std::cout << dups << endl;

    return 0;
}
