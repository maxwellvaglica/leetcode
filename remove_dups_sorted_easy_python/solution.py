import pdb
class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        capture_list = []
        unique_number = 0
        nums.reverse()
        for num in nums.copy():
            if num not in capture_list:
                unique_number += 1
                nums.insert(0, num)
                capture_list.append(num)
        return unique_number


if __name__== '__main__':
    nums = [1,1,2]
    print(Solution().removeDuplicates(nums))