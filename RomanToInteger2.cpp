#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int sum = 0;
        int ok = 0;
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case 'M':
                if (s[i - 1] == 'C' && i > 0)
                {
                    sum = sum + 1000 - 200;
                }
                else
                    sum += 1000;
                break;
            case 'D':
                if (s[i - 1] == 'C' && i > 0)
                {
                    sum = sum + 500 - 200;
                }
                else
                    sum = sum + 500;
                break;
            case 'C':
                if (s[i - 1] == 'X' && i > 0)
                {
                    sum = sum + 100 - 20;
                }
                else
                    sum = sum + 100;
                break;
            case 'L':
                if (s[i - 1] == 'X' && i > 0)
                {
                    sum = sum + 50 - 20;
                }
                else
                    sum = sum + 50;
                break;
            case 'X':
                if (s[i - 1] == 'I' && i > 0)
                {
                    sum = sum + 10 - 2;
                }
                else
                    sum = sum + 10;
                break;
            case 'V':
                if (s[i - 1] == 'I' && i > 0)
                {
                    sum = sum + 5 - 2;
                }

                else
                    sum = sum + 5;
                break;
            case 'I':

                sum = sum + 1;
                break;

            default:

                break;
            }
        }

        return sum;
    }
};
int main()
{
    Solution n;
    cout << n.romanToInt("LX");
    return 0;
}
