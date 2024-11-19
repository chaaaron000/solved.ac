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

    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n; i++)
        cin >> v[i][0] >> v[i][1];

    for (vector<int> p : v)
    {
        int k = 0;
        for (vector<int> q : v)
            if (q[0] > p[0] && q[1] > p[1]) k++;

        cout << k + 1 << " ";
    }
}

int main(int argc, char const *argv[])
{
    Solution();

    return 0;
}
