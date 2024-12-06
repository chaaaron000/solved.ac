#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    vector<vector<int>> piv(41, vector<int>(2, 0));
    piv[0] = {1, 0};
    piv[1] = {0, 1};
    for (int i = 2; i < 41; i++)
    {
        piv[i][0] = piv[i - 1][0] + piv[i - 2][0];
        piv[i][1] = piv[i - 1][1] + piv[i - 2][1];
    }

    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        cout << piv[n][0] << " " << piv[n][1] << '\n';
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
