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
    int K;
    cin >> K;

    stack<int> st;
    for (int i = 0; i < K; i++)
    {
        int n;
        cin >> n;

        if (n == 0) st.pop();
        else st.push(n);
    }

    int sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }

    cout << sum;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
