#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int goodChess[6] = {1, 1, 2, 2, 2, 8};
    int badChess[6];

    for (int i = 0; i < 6; i++)
    {
        int n;
        cin >> n;
        badChess[i] = goodChess[i] - n;
    }

    for (int i = 0; i < 6; i++)
        cout << badChess[i] << " ";

    return 0;
}
