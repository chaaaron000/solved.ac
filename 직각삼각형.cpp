#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    while ((a + b + c) != 0)
    {
        a = pow(a, 2);
        b = pow(b, 2);
        c = pow(c, 2);

        if (a + b == c || b + c == a || a + c == b)
            cout << "right\n";
        else
            cout << "wrong\n";

        cin >> a >> b >> c;
    }
    
    return 0;
}
