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

    int max = 0;
    vector<int> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
        max = (v[i] > max ? v[i] : max);
    }
    
    sort(v.rbegin(), v.rend());

    int share = n / k;
    int mod = n % k;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
