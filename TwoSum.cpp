// HASH
#include <map>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ret;
        int size = nums.size();
        int diff;
        map<int, int> m;
        // builds a map with the number and index and checks if i find the difference number in the map and the numbers arent the same (2 different numbers)
        // {2 1 3 7}    m.find(diff) means it points to the entire pair in the map, m.find(diff)->second is the value
        //  0 1 2 3
        for (int i = 0; i < size; i++)
        {
            diff = target - nums[i];
            if (m.find(diff) != m.end() && m.find(diff)->second != i)
            {
                std::cout << " M.find(diff)= " << m.find(diff)->first;
                std::cout << " M.find(diff)->second = " << m.find(diff)->second;
                std::cout << "/n";

                ret.push_back(i);
                ret.push_back(m.find(diff)->second);
                return ret;
            }
            m[nums[i]] = i;
        }
        return ret;
    }
};

int main()
{
    Solution n;
    vector<int> v;
    v = {2, 1, 3, 7};

    vector<int> sol;
    sol = n.twoSum(v, 9);
    for (int i : sol)
    {
        cout << i << " ";
    }
}

// BRUTE FORCE

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         for (int i = 0; i < nums.size() - 1; i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 if (nums[i] + nums[j] == target)
//                 {
//                     return new int { i, j }
//                 }
//             }
//         }
//     };
// };

// int main()
// {
//     Solution n;
// }