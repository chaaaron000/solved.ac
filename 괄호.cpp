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
    for (int i = 0; i < T; i++)
    {
        string s;
        cin >> s;

        stack<char> st;
        for (char c : s)
        {
            if (c == '(') st.push(c);
            else if (c == ')')
            {
                if (!st.empty() && st.top() == '(') st.pop();
                else
                {
                    st.push(c);
                    break;
                }
            }
        }

        cout << (st.empty() ? "YES" : "NO") << '\n';
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
