#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

/*
연속된 3개의 자연수가 FizzBuzz, Fizz, Buzz로만 이루어진 경우는 없다.
*/

void solution()
{
    vector<string> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
        if (v[i] != "FizzBuzz" && v[i] != "Fizz" && v[i] != "Buzz")
        {
            int num = stoi(v[i]) + 3 - i;

            if (num % 3 == 0 && num % 5 == 0)
                cout << "FizzBuzz";
            else if (num % 3 == 0 && num % 5 != 0)
                cout << "Fizz";
            else if (num % 3 != 0 && num % 5 == 0)
                cout << "Buzz";
            else
                cout << num;

            return;
        }
    }
}

int main(int argc, char const *argv[])
{
    solution();

    return 0;
}
