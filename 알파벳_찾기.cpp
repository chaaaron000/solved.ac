#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    bool exist;
    for (char c = 'a'; c <= 'z'; c++)
    {
        exist = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                cout << i << ' ';
                exist = true;
                break;
            }
        }

        if (!exist) cout << "-1 ";
    }
    
    return 0;
}
