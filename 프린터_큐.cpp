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
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int count = 0;
        int position = m;

        while (1)
        {
            int front = v[0];
            bool print = true;
            for (int i = 0; i < v.size(); i++)
                if (v[i] > front)
                {
                    print = false;
                    break;
                }

            v.erase(v.begin() + 0);
            if (print) 
            {
                count++;
                if (position == 0) break;
            }
            else v.push_back(front);

            position--;
            if (position < 0) position = v.size() - 1;
        }

        cout << count << '\n';
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
