#include <iostream>

using namespace std;

int DecompositionSum(int num)
{
    int digitsSum = 0;
    int temp = num;
    while (temp != 0)
    {
        digitsSum += temp % 10;
        temp /= 10;
    }

    return num + digitsSum;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int result = 0;
    int decomposition;

    for (int i = 1; i < n; i++)
    {
        decomposition = DecompositionSum(i);
        if (decomposition == n)
        {
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}
