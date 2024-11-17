#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int sum = 0;
    string input;

    cin >> n;
    cin >> input;

    for (int i = 0; i < n; i++)
        sum += (input[i] - '0');

    cout << sum;

    return 0;
}
