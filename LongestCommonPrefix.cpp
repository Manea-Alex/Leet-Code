#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string common;
        char current;
        int ok = 0;
        int size = strs.size();
        // gets the size and iterates untill the first word is finished, ideally you should get the smallest workd and iterate to its size
        for (int i = 0; i < strs[0].size(); i++)
        {
            // get the first letter of first word, and then the next and the next because i++
            current = strs[0][i];
            for (int j = 1; j < size; j++)
            {
                // starts from 1 because strs[0][i] will be the first word, we need to check for the ones up next
                //  if we find that the current letter is different from the ones of the next words we return - it works like a break and we found the longest suffix

                if (current != strs[j][i])
                    return common;
            }

            common.push_back(current);
        }
    }
};

// class Solution
// {
// public:
//     string longestCommonPrefix(vector<string> &strs)
//     {
//         int count = 0, min = 1000;
//         string str;
//         for (int i = 0; i < strs.size(); i++)
//         {
//             int len = strs[i].length();
//             if (len < min)
//             {
//                 min = len;
//                 str = strs[i];
//             }
//         }
//         std::cout << " Str[0] is " << str[0] << "\n";

//         for (int i = 0; i < min; i++)
//         {
//             for (int j = 0; j < strs.size(); j++)
//             {
//                 std::cout << " str[" << i << "]"
//                           << "is " << str[i] << "\n";
//                 std::cout << " Strs[" << j << "]"
//                           << "[" << i << "]"
//                           << " is " << strs[j][i] << "\n";
//                 std::cout << "\n";
//                 std::cout << "\n";
//                 if (strs[j][i] != str[i])
//                     return str.substr(0, count);
//             }
//             count++;
//         }
//         return str.substr(0, count);
//     }
// };

int main()
{
    Solution n;
    std::vector<std::string> v = {"flower", "flight", "flw"};

    std::cout << n.longestCommonPrefix(v);

    return 0;
}