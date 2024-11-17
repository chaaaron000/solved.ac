#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    int r;
    string s;
    for (int i = 0; i < t; i++)
    {
        cin >> r >> s;
        for (char c : s)
            for (int j = 0; j < r; j++)
                cout << c;

        cout << '\n';
    }
    
    return 0;
}
