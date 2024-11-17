#include <iostream>
#include <cmath>

using namespace std;

const int r = 31;
const int m = 1234567891;

int main(int argc, char const *argv[])
{
    

    int l;
    string input;
    cin >> l;
    cin >> input;

    int hash = 0;
    int mod;
    for (int i = 0; i < l; i++)
    {
        // 뭔가 31 곱하는 것을 
        // 미리미리 나눠서 처리하는 방법?
        mod = (int)(input[i] - 'a') + 1;
        for (int j = 0; j < i; j++)
        {
            mod *= r;
            while (mod / m != 0)
                mod %= m;
        }
        
        hash += mod;
        while (hash / m != 0)
            hash %= m;
    }

    cout << hash % m;
    
    return 0;
}
