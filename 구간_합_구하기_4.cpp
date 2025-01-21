#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int N, M;
    cin >> N >> M;
    vector<int> v(N + 1, 0), sum(N + 1, 0);
    for (int i = 1; i < N + 1; i++)
    {
        cin >> v[i];
        sum[i] = sum[i - 1] + v[i];
    }

    for (int m = 0; m < M; m++)
    {
        int i, j;
        cin >> i >> j;
        cout << sum[j] - sum[i - 1] << "\n";
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
