#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    string s;
    int score, continuousCount;
    for (int i = 0; i < t; i++)
    {
        cin >> s;

        score = 0;
        continuousCount = 0;
        for (char c : s)
        {
            if (c == 'O')
            {
                continuousCount++;
                score += continuousCount;
            }
            else
            {
                continuousCount = 0;
            }
        }

        cout << score << '\n';
    }
    
    return 0;
}
