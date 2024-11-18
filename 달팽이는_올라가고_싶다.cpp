#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void solution()
{
    int A, B, V;
    cin >> A >> B >> V;

    // A * day - B * (day-1) >= V
    // (A - B) * day + B >= V
    // day >= (V - B) / (A - B)

    int day = (V - B) / (A - B);
    cout << ((V - B) % (A - B) == 0 ? day : day + 1);
}

int main(int argc, char const *argv[])
{
    solution();

    return 0;
}
