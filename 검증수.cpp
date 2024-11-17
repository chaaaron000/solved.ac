#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[5];
    int sum = 0;

    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];

    for (int i = 0; i < 5; i++)
        sum += pow(num[i], 2);

    cout << sum % 10;
     

    return 0;
}
