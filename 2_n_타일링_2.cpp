#include <bits/stdc++.h>

using namespace std;

// 나중에 DP로 다시 풀어볼 것

const int MOD = 10007;

int ModPower(int x, int exp);
int ModFactorial(int n);

int ModPower(int x, int exp)
{
    int result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = (result * x) % MOD;

        x = (x * x) % MOD;
        exp /= 2;
    }

    return result;
}

int ModFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = (fact * i) % MOD;

    return fact;
}

void Solution()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return;
    }

    int sum = 0;
    int maxHorizontalTile = n / 2;
    for (int ht = 0; ht <= maxHorizontalTile; ht++)
    {
        int vt = n - (ht * 2);
        int totalTileCnt = ht + vt;

        // totalTileCnt! / vt! * TwoByTwo! * TwoByOne!
        int numerator = ModFactorial(totalTileCnt);
        for (int tbt = 0; tbt <= ht; tbt++)
        {
            int tbo = ht - tbt;
            int hd = ModFactorial(tbt) * ModFactorial(tbo) % MOD;
            int denominator = (ModFactorial(vt) * hd) % MOD;
            int inverse = ModPower(denominator, MOD - 2);
            sum += (numerator * inverse) % MOD;
            sum %= MOD;
        }
        // cout << sum << "\n";
    }

    cout << sum;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
