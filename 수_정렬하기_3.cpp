#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void solution()
{
    vector<int> v(10001, 0);
    int N;
    cin >> N;
    for (int n = 0; n < N; n++)
    {
        int num;
        cin >> num;
        v[num]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        if (v[i] == 0)
            continue;
        for (int j = 0; j < v[i]; j++)
            cout << i << '\n';
    }
}

int main(int argc, char const *argv[])
{
    solution();

    return 0;
}
