#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int scale;
    bool asc;
    bool mixed = false;

    for (int i = 0; i < 8; i++)
    {
        cin >> scale;

        if (i == 0)
        {
            if (scale == 1)
                asc = true;
            else if (scale == 8)
                asc = false;
            else
            {
                mixed = true;
                break;
            }
        }
        else
        {
            if ((asc && scale != i + 1) || (!asc && scale != 8 - i))
            {
                mixed = true;
                break;
            }
        }
        
    }

    string result = mixed ? "mixed" : (asc ? "ascending" : "descending");
    cout << result;
    
    return 0;
}
