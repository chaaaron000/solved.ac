#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void Solution()
{
    int n;
    cin >> n;

    vector<int> age(n);
    vector<string> name(n);
    for (int i = 0; i < n; i++)
        cin >> age[i] >> name[i];

    for (int i = 1; i <= 200; i++)
        for (int j = 0; j < n; j++)
            if (age[j] == i)
                cout << age[j] << " " << name[j] << '\n';
}

int main(int argc, char const *argv[])
{
    Solution();

    return 0;
}
