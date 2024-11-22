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

    int min = -1;
    for (int b5 = 0; b5 <= (n / 5); b5++)
    {
        int remain = n - (b5 * 5);
        if (remain % 3 == 0)
        {
            int b3 = remain / 3;
            min = (min == -1 || b3 + b5 < min ? b3 + b5 : min);
        }
    }

    cout << min;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
