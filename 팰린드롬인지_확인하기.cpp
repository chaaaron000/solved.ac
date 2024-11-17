#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string input;

    cin >> input;

    int size = input.size();
    bool pel = true;

    for (int i = 0; i < size / 2; i++)
    {
        if (input[i] != input[size-i-1])
        {
            pel = false;
            break;
        }
    }

    cout << pel;

    return 0;
}
