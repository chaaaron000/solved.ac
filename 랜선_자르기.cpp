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
    int k, n;
    cin >> k >> n;

    long long high = 0, low = 1;
    vector<int> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
        high = (v[i] > high ? v[i] : high);
    }
    
    long long mid, anw = 0;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        int cnt = 0;
        for (int i : v)
            cnt += (i / mid);

        if (cnt < n)
            high = mid - 1;
        else
        {
            low = mid + 1;
            anw = std::max(mid, anw);
        }
    }

    cout << anw;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
