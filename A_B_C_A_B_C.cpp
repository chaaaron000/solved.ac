#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << a + b - c << "\n";
    cout << stoi(to_string(a) + to_string(b)) - c;

    return 0;
}
