#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle = {{1}};

        vector<int> previous_array = {1};
        for (int i = 2; i <= numRows; i++)
        {
            // declare an array the size of the current i and initialize it with 0
            vector<int> array(i, 0);
            // initialize the end and beginning with 1
            array[0] = 1;
            array[i - 1] = 1;
            // iterate through the middle part from begin +1 to end-1 so from 1 instead of 0 to i-2(end-1) instead of i-1(end)
            for (int j = 1; j <= i - 2; j++)
            {
                // add the values from the prev array
                array[j] = previous_array[j - 1] + previous_array[j];
            }
            // put in the triangle
            triangle.push_back(array);
            // change the copy of the array to the previous one
            previous_array = array;
        }
        return triangle;
    }
};

int main()
{
    Solution n;
    vector<vector<int>> result = n.generate(5);
    // print the result
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}