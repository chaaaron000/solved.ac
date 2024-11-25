#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

void Solution()
{
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "push")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (s == "pop")
        {
            if (q.empty()) cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (s == "size")
        {
            cout << q.size() << '\n';
        }
        else if (s == "empty")
        {
            cout << (q.empty() ? 1 : 0) << '\n';
        }
        else if (s == "front")
        {
            cout << (!q.empty() ? q.front() : -1) << '\n';
        }
        else if (s == "back")
        {
            cout << (!q.empty() ? q.back() : -1) << '\n';
        }
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
