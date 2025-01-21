#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1, 1);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    int next = 2;
    int j = 0;
    for (int i = 4; i < n + 1; i++)
    {
        if ((next * next) == i)
        {
            next++;
            j = 1;
        }
        else
        {
            int min = 4;
            for (int j = 1; j < next; j++)
                min = std::min(min, dp[i - j * j]);

            dp[i] = 1 + min;
        }
    }

    cout << dp[n];
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
