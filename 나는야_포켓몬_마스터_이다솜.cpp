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
    int N, M;
    cin >> N >> M;

    unordered_map<string, string> numToName, nameToNum;

    string s;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        numToName[to_string(i + 1)] = s;
        nameToNum[s] = to_string(i + 1);
    }

    for (int i = 0; i < M; i++)
    {
        cin >> s;
        if (numToName.find(s) != numToName.end())
            cout << numToName[s] << '\n';
        else
            cout << nameToNum[s] << '\n';
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
