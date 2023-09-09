class Solution(object):
    def strStr(self, haystack, needle):
        if not needle:
            return 0
        # go through the loop to  Make sure there's enough length left in haystack for a match
        for i in range(len(haystack) - len(needle) + 1):
            # check if the substring in haystack of length needle its equal to needle
            if haystack[i:i+len(needle)] == needle:
                return i
            # if it is return the index, otherwise return -1
        return -1
        # if not needle:
        #     return 0
        # for i in range(len(haystack) - len(needle) + 1):
        #     if haystack[i] == needle[0]:
        #         j = 0
        #         while j < len(needle):
        #             if haystack[i+j] != needle[j]:
        #                 break
        #             j += 1
        #         if j == len(needle):
        #             return i
        # return -1


if __name__ == "__main__":
    solution = Solution()
    x = solution.strStr("sadbutsad", "sad")
    print(x)
