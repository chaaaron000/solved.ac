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
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if (s == "pop")
        {
            if (st.empty()) cout << -1 << '\n';
            else
            {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if (s == "size")
        {
            cout << st.size() << '\n';
        }
        else if (s == "empty")
        {
            cout << (st.empty() ? 1 : 0) << '\n';
        }
        else if (s == "top")
        {
            if (st.empty()) cout << -1 << '\n';
            else cout << st.top() << '\n';    
        }
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
