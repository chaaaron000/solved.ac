#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int N, K;
    cin >> N >> K;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        if (num <= K) v.push_back(num);
    }

    int ans = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        ans += K / v[i];
        K %= v[i];
    }
    cout << ans;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
