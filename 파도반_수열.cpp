#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    vector<long long> p(101, 1);
    p[4] = 2;
    p[5] = 2;
    for (int i = 6; i < 101; i++)
        p[i] = p[i - 1] + p[i - 5];

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        cout << p[N] << "\n";
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution();
    return 0;
}
