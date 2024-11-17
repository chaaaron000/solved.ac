#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    string total = to_string(a * b * c);
    
    int count;
    for (char i = '0'; i <= '9'; i++)
    {
        count = 0;
        for (char c : total)
        {
            if (c == i)
                count++;
        }
        cout << count << '\n';
    }
    
    
    return 0;
}
