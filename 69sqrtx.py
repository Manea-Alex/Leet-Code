class Solution(object):
    def mySqrt(self, x):
        if x < 0:
            return 0
        number = 0
        while number * number <= x:
            number += 1
        return number - 1


if __name__ == "__main__":
    x = 8

    number = Solution()
    print(number.mySqrt(x))


# parcurg digits, fac un numar, il incrementez  si dupa il de
