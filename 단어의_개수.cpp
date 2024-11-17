#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);

    int spaceCount = 0;

    for (char c : s)
        if (c == ' ')
            spaceCount++;
    
    if (s.front() == ' ') spaceCount--;
    if (s.back()  == ' ') spaceCount--;

    cout << spaceCount + 1;
    
    return 0;
}
