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
    int l;
    cin >> l;
    string s;
    cin >> s;

    int m = 1234567891;
    long long hash = 0, r = 1;
    for (int i = 0; i < l; i++)
    {
        hash = (hash + (s[i] - 'a' + 1) * r) % m;
        r = (r * 31) % m;
    }

    cout << hash;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
