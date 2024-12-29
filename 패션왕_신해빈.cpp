#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        string name, type;
        unordered_map<string, int> um;
        for (int i = 0; i < n; i++)
        {
            cin >> name >> type;
            if (um.find(type) != um.end()) um[type]++;
            else um[type] = 2;
        }

        int result = 1;
        for (auto iter = um.begin(); iter != um.end(); ++iter)
            result *= iter->second;

        cout << result - 1 << "\n";
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
