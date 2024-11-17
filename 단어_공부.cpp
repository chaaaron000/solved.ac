#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++)
        input[i] = toupper(input[i]);

    char maxChar = input[0];
    char nowChar;
    int maxCharCount = 0;
    int nowCharCount = 0;
    bool same = false;
    
    for (int i = 0; i < input.size(); i++)
    {
        nowCharCount = 0;
        nowChar = input[i];

        for (int j = 0; j < input.size(); j++)
        {
            if (input[j] == nowChar)
                nowCharCount++;
        }
        
        if (nowCharCount > maxCharCount)
        {
            maxChar = nowChar;
            maxCharCount = nowCharCount;
        }
        else if (i != 0 && nowChar != maxChar && nowCharCount == maxCharCount)
        {
            same = true;
            break;
        }

    }

    if (same)
        cout << "?";
    else
        cout << maxChar;

    return 0;
}
