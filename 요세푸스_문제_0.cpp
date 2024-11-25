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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;

    int now = 0;
    cout << "<";
    while (!v.empty())
    {
        now += (k - 1);
        now %= v.size();
        cout << v[now] << (v.size() == 1 ? "" : ", ");
        v.erase(v.begin() + now);
    }
    cout << ">";
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
