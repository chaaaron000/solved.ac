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
        q.push(i + 1);

    while (q.size() > 1)
    {
        q.pop();

        if (q.size() == 1) break;

        int front = q.front();
        q.pop();
        q.push(front);
    }

    cout << q.front();
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
