#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    vector<int> v(11, 0);
    for (int i = 1; i < 11; i++)
    {
        int cnt = 0;
        queue<int> q;
        q.push(0);

        while (q.empty() == false)
        {
            int front = q.front();
            q.pop();

            if (front == i)
            {
                cnt++;
                continue;
            }

            if (front + 1 <= i) q.push(front + 1);
            if (front + 2 <= i) q.push(front + 2);
            if (front + 3 <= i) q.push(front + 3);
        }

        // cout << i << " " << cnt << "\n";
        v[i] = cnt;
    }

    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        cout << v[n] << "\n";
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
