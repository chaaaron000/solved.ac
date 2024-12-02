#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int N, M;
    cin >> N >> M;
    unordered_map<string, int> um;

    string s;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        um[s] = 0;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> s;
        if (um.find(s) != um.end()) um[s]++;
    }

    vector<string> v;
    int cnt = 0;
    for (auto iter = um.begin(); iter != um.end(); ++iter)
    {
        if (iter->second == 1)
        {
            v.push_back(iter->first);
            cnt++;
        }
    }

    cout << cnt << '\n';

    sort(v.begin(), v.end());
    for (string s : v)
        cout << s << '\n';
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
