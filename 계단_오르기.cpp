#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >> v[i];

    vector<int> dp(n + 1, 0);
    dp[1] = v[1];
    dp[2] = v[1] + v[2];
    dp[3] = max(v[1], v[2]) + v[3];

    for (int i = 4; i < n + 1; i++)
        dp[i] = max(v[i - 1] + dp[i - 3], dp[i - 2]) + v[i];

    cout << dp[n];
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
