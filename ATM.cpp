#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
            ans += v[j];
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
