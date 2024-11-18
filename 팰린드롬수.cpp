#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string n;

    while (true)
    {
        cin >> n;

        if (n == "0") break;

        bool pal = true;
        for (int i = 0; i < (n.size() / 2); i++)
        {
            if (n[i] != n[n.size() - 1 - i])
            {
                pal = false;
                break;
            }
        }

        cout << (pal ? "yes" : "no") << '\n';
    }
    
    return 0;
}
