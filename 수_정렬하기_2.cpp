#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void Solution()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort (v.begin(), v.end());

    for (int i : v)
        cout << i << '\n';
}

int main(int argc, char const *argv[])
{
    Solution();

    return 0;
}
