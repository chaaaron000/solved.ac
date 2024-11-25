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
    string s;
    getline(cin, s);
    while (s != ".")
    {
        stack<char> st;
        bool ok = true;
        for (char c : s)
        {
            if (c == '(' || c == '[')
            {
                st.push(c);
            }
            else if (c == ')' || c == ']')
            {
                if (st.empty())
                {
                    ok = false;
                    break;
                }

                if ((c == ')' && st.top() == '(') ||
                    (c == ']' && st.top() == '['))
                {
                    st.pop();
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }

        if (st.empty() && ok) cout << "yes" << '\n';
        else cout << "no" << '\n';

        getline(cin, s);
    }
    
}

int main(int argc, char const *argv[])
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    Solution();
    return 0;
}
