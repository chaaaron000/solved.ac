#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

bool IsEndNumber(int n)
{
    return (to_string(n).find("666") != -1 ? true : false);
}

void solution()
{
    int n;
    cin >> n;

    int en = 0;
    int i = 0;
    while (i < n)
    {
        en++;
        if (IsEndNumber(en))
            i++;
    }

    cout << en;
}

int main(int argc, char const *argv[])
{
    solution();

    return 0;
}
