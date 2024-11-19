#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

string Sum(string a, string b)
{
    string result = "";

    int carry = 0;
    while (!a.empty() || !b.empty())
    {
        if (!a.empty())
        {
            carry += (a.back() - '0');
            a.pop_back();
        }

        if (!b.empty())
        {
            carry += (b.back() - '0');
            b.pop_back();
        }

        result = to_string(carry % 10) + result;
        carry /= 10;
    }

    result = (carry > 0 ? to_string(carry) + result : result);

    return result;
}

string Multi(string a, string b)
{
    string result = "0";
    int i = 0;
    
    while (!b.empty())
    {
        int n = b.back() - '0';
        b.pop_back();

        string ms = "";
        
        int carry = 0;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            int m = (a[i] - '0') * n + carry;
            ms = to_string(m % 10) + ms;
            carry = m / 10;
        }

        ms = (carry > 0 ? to_string(carry) + ms : ms) + string(i, '0');

        result = Sum(result, ms);
        i++;
    }

    return result;
}

void Solution()
{
    int n;
    cin >> n;

    string s = "1";
    for (int i = 2; i <= n; i++)
        s = Multi(s, to_string(i));

    for (int i = 0; i < s.size(); i++)
        if (s[s.size() - 1 - i] != '0')
        {
            cout << i;
            return;
        }
}

int main(int argc, char const *argv[])
{
    Solution();

    return 0;
}
