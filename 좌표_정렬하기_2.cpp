#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

bool compare(vector<int> &a, vector<int> &b)
{
    if (a[1] != b[1]) return a[1] < b[1];
    else return a[0] < b[0];
}

void Solution()
{
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n; i++)
        cin >> v[i][0] >> v[i][1];

    sort(v.begin(), v.end(), compare);

    for (vector<int> &i : v)
        cout << i[0] << " " << i[1] << "\n";
}

int main(int argc, char const *argv[])
{
    Solution();

    return 0;
}
