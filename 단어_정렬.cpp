#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

bool compare(string &a, string &b)
{
    int alen = a.size();
    int blen = b.size();
    if (alen != blen) return alen < blen;
    else return a < b;
}

void solution()
{
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && v[i] == v[i - 1]) continue;
        cout << v[i] << '\n';
    }
}

int main(int argc, char const *argv[])
{
    solution();

    return 0;
}
