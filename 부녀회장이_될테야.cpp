#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int k, n;
        cin >> k >> n;

        vector<vector<int>> v(k + 1, vector<int>(n + 1, 1));
        for (int i = 1; i < n + 1; i++)
            v[0][i] = i;

        for (int i = 1; i < k + 1; i++)
        {
            for (int j = 2; j < n + 1; j++)
            {
                // i층 j호 : i층 j-1호 + i-1층 j호
                v[i][j] = v[i][j - 1] + v[i - 1][j];
            }
        }

        cout << v[k][n] << '\n';
    }
    
    return 0;
}
