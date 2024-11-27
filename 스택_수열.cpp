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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int now = 1;
    stack<int> st;
    vector<char> result;
    for (int i = 0; i < n; i++)
    {
        if (st.empty() || st.top() < v[i])
        {
            if (now > v[i])
            {
                cout << "NO";
                return;
            }

            while (now <= v[i])
            {
                result.push_back('+');
                st.push(now);
                now++;
            }

            result.push_back('-');
            st.pop();
        }
        else if (st.top() >= v[i])
        {
            while (!st.empty() && st.top() >= v[i])
            {
                result.push_back('-');
                st.pop();
            }
        }
    }

    for (char c : result)
        cout << c << '\n';
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
