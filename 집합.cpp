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
    int M;
    cin >> M;
    vector<int> v(21, 0);
    for (int m = 0; m < M; m++)
    {
        string cmd;
        int x;
        cin >> cmd;

        if (cmd == "add")
        {
            cin >> x;
            v[x] = 1;
        }
        else if (cmd == "remove")
        {
            cin >> x;
            v[x] = 0;
        }
        else if (cmd == "check")
        {
            cin >> x;
            cout << v[x] << '\n';
        }
        else if (cmd == "toggle")
        {
            cin >> x;
            v[x] = (v[x] == 0 ? 1 : 0);
        }
        else if (cmd == "all")
        {
            for (int i = 1; i < 21; i++)
            {
                v[i] = 1;
            }
        }
        else if (cmd == "empty")
        {
            for (int i = 1; i < 21; i++)
            {
                v[i] = 0;
            }
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
