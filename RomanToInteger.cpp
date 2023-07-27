#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>
using std::cin;
using std::cout;
using std::string;
// using namespace std;

int main()
{
    string s;
    cout << "Type a number: "; // Type a number and press enter
    cin >> s;
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
            else if (s[i - 1] == 'L' || s[i - 1] == 'D' || s[i - 1] == 'I' || s[i - 1] == 'V' || s[i - 1] == 'X')
                ok = 1;
            else
                sum += 1000;
            break;
        case 'D':
            if (s[i - 1] == 'C' && i > 0)
            {
                sum = sum + 500 - 200;
            }
            else if (s[i - 1] == 'L' || s[i - 1] == 'I' || s[i - 1] == 'V' || s[i - 1] == 'X')
                ok = 1;
            else
                sum = sum + 500;
            break;
        case 'L':
            if (s[i - 1] == 'X' && i > 0)
            {
                sum = sum + 50 - 20;
            }
            else if (s[i - 1] == 'I' || s[i - 1] == 'V')
                ok = 1;
            else
                sum = sum + 50;
            break;
        case 'X':
            if (s[i - 1] == 'I' && i > 0)
            {
                sum = sum + 10 - 2;
            }
            else if (s[i - 1] == 'V')
                ok = 1;
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
    if (ok == 1)
        cout << "Enter a valid number";
    else
        cout << "Number is " << sum;
    return 0;
}
