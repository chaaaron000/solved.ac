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
    if (n == 0)
    {
        cout << 0;
        return;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int cut = round(n * 0.15f);
    int sum = 0;
    for (int i = cut; i < n - cut; i++)
        sum += v[i];

    cout << round((float)sum / (n - 2 * cut)); 
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
