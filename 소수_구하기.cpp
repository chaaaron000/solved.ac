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
    int n, m;
    cin >> n >> m;
    bool pri = true;
    for (int i = n; i <= m; i++)
    {
        pri = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                pri = false;
                break;
            } 
        }

        if (pri) cout << i << '\n';
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
