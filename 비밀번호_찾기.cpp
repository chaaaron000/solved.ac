#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int N, M;
    cin >> N >> M;
    unordered_map<string, string> um;
    string si, pw;
    for (int i = 0; i < N; i++)
    {
        cin >> si >> pw;
        um[si] = pw;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> si;
        cout << um[si] << '\n';
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
