class Solution(object):
    def plusOne(self, digits):
        if not digits:
            return 0
        number = 0
        for index, value in enumerate(digits):
            number = number*10 + value
        number += 1

        array = []

        number_str = str(number)
        for i in range(len(number_str)):
            array.append(int(number_str[i]))
        return array


if __name__ == "__main__":
    x = [1, 2, 3]

    number = Solution()
    print(number.plusOne(x))


# parcurg digits, fac un numar, il incrementez  si dupa il dezasamblez din nou
