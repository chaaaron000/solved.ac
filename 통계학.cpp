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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int sum = 0;
    int mid;
    int midIndex = n / 2;
    vector<int> mode;
    int modeMax = 0;
    int modeCount = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (i == midIndex) mid = v[i];

        if (i != 0 && v[i] == v[i - 1]) modeCount++;
        else modeCount = 0;
        if (modeCount > modeMax) 
        {
            modeMax = modeCount;
            mode.clear();
            mode.push_back(v[i]);
        }
        else if (modeCount == modeMax) 
            mode.push_back(v[i]);
    }

    cout << (int)round((double)sum / n) << '\n';
    cout << mid << '\n';
    cout << (mode.size() > 1 ? mode[1] : mode[0]) << '\n';
    cout << v[n - 1] - v[0] << '\n';
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
