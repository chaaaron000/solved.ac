#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

bool bs(vector<int> &v, int target)
{
    int left = 0;
    int right = v.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (v[mid] == target) return true;
        else if (v[mid] > target) right = mid - 1;
        else if (v[mid] < target) left = mid + 1;
    }

    return false;
}

void Solution()
{
    int n, m;

    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];    

    sort(v.begin(), v.end());

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        cout << bs(v, t) << '\n';
    }   
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
