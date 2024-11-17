#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int remains[10];
    int num;
    int remain;
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        remain = num % 42;

        count++;
        for (int j = 0; j < i; j++)
        {
            if (remain == remains[j])
            {
                count--;
                break;
            }
        }

        remains[i] = remain;
    }

    cout << count;
    
    return 0;
}
