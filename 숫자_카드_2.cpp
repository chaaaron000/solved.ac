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

    unordered_map<int, int> um; // 개수 저장

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (um.find(num) != um.end()) um[num]++;
        else um[num] = 1;
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        if (um.find(num) != um.end()) cout << um[num];
        else cout << 0;
        cout << ' ';
    }

}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
