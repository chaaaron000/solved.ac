#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int num;
    int count = 0;
    bool decimal = true;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num != 1)
        {
            if (num % 2 != 0)
            {
                decimal = true;

                for (int j = 2; j <= (num / 2); j++)
                {
                    if (num % j == 0)
                    {
                        decimal = false;
                        break;
                    }
                }

                if (decimal)
                    count++;
            }
            else if (num == 2)
                count++;
        }

        
    }
    
    cout << count;

    return 0;
}
