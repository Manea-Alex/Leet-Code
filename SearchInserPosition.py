# first solution is to just go through it and then print it if the target is <= otherwise add it to the end
class Solution(object):
    def searchInsert(self, nums, target):
        # I'st solution
        # for index, number in enumerate(nums):
        #     if target <= number:
        #         return index
        # return len(nums)

        # II'nd solution - Binary tree
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = (l + r) // 2
            if target == nums[mid]:
                return mid
            if target < nums[mid]:
                r = mid - 1
            else:
                l = mid + 1
        return l


if __name__ == "__main__":
    solution = Solution()

    index = solution.searchInsert([1, 3, 5, 6], 2)

    print("The index is " + str(index))
