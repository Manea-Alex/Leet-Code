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
        for (int i = 0; i < strs[0].size(); i++)
        {
            current = strs[0][i];
            for (int j = 1; j < size; j++)
            {
                // std::cout << " Current " << current << " Strs[j][i] " << strs[j][i] << "\n";
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