#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int starCount = 1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
    
        for (int j = 0; j < starCount; j++)
            cout << "*";
        
        starCount += 2;
        cout << "\n";
    }

    starCount -= 4;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << " ";

        for (int j = 0; j < starCount; j++)
            cout << "*";

        starCount -= 2;
        cout << "\n";
    }
    
    
    return 0;
}
