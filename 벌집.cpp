#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int result = 1, num = 1;
    while (num < n)
    {
        num += (6 * result);
        result++;
    }

    cout << result;
    
    return 0;
}
