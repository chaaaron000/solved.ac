#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int Chess(vector<vector<char>> &chess, int &x, int &y)
{
    string white = "WBWBWBWB";
    string black = "BWBWBWBW";

    bool w = true;
    int wcount = 0;
    int bcount = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (( w && chess[y + i][x + j] != white[j]) ||
                (!w && chess[y + i][x + j] != black[j]))
                wcount++;

            if ((!w && chess[y + i][x + j] != white[j]) ||
                ( w && chess[y + i][x + j] != black[j]))
                bcount++;
        }

        w = !w;
    }

    return std::min(wcount, bcount);
}

void Solution()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> chess(n, vector<char>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> chess[i][j];

    int min = n * m;
    for (int i = 0; i <= n - 8; i++)
    {
        for (int j = 0; j <= m - 8; j++)
        {
            min = std::min(Chess(chess, j, i), min);
        }
    }

    cout << min;
    
}

int main(int argc, char const *argv[])
{
    Solution();

    return 0;
}
