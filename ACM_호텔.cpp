#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, h, w, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        cout << (n % h == 0 ? h * 100 + n / h : (n % h) * 100 + (n / h + 1)) << "\n";
    }
    
    return 0;
}
