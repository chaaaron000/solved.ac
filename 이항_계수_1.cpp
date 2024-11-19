#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;

    return result;
}

void solution()
{
    int n, k;
    cin >> n >> k;
    cout << factorial(n) / factorial(n - k) / factorial(k);
}

int main(int argc, char const *argv[])
{
    solution();

    return 0;
}
