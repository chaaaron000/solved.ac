#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int n;
    cin >> n;

    vector<int> v(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        v[i] = v[i - 1] + 1;
        if (!(i % 3)) v[i] = min(v[i], v[i/3] + 1);
        if (!(i % 2)) v[i] = min(v[i], v[i/2] + 1);
    }

    cout << v[n];
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
