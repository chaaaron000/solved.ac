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
    cin >> m >> n;
    vector<int> v;
    for (int i = m; i <= n; i++)
    {
        if (i == 1) continue;
        v.push_back(i);
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] == 0) continue;
            else if (v[j] != i && v[j] % i == 0) v[j] = 0;
        }
    }

    for (int i : v)
        if (i != 0) cout << i << '\n';
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
