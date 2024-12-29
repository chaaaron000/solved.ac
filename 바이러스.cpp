#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 1);
    for (int i = 0; i < m; i++)
    {
        int c1, c2;
        cin >> c1 >> c2;
        v[c1].push_back(c2);
        v[c2].push_back(c1);
    }

    vector<int> visited(n + 1, 0);
    visited[1] = 1;

    queue<int> q;
    q.push(1);
    while (q.empty() == false)
    {
        int front = q.front();
        q.pop();

        for (int i : v[front])
        {
            if (visited[i] == 1) continue;

            q.push(i);
            visited[i] = 1;
        }
    }

    int sum = -1;
    for (int i : visited)
        sum += i;

    cout << sum;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
