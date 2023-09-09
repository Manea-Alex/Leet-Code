class Solution(object):
    def lengthOfLastWord(self, s):
        if not s:
            return 0
        reverse = s[::-1]
        length = 0
        i = 0
        while i < len(reverse) and reverse[i] == " ":
            i += 1

        while i < len(reverse) and reverse[i].isalpha():
            length += 1
            i += 1

        return length


if __name__ == "__main__":
    x = "Hello Worldss"

    number = Solution()
    print(number.lengthOfLastWord(x))
