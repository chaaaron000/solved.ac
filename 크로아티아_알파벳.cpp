#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string kroatia[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    string str;
    cin >> str;
    int count = str.size();

    for (int i = 0; i < 8; i++)
    {
        if (str.find(kroatia[i]) != string::npos)
        {
            count -= (kroatia[i].size() - 1);
        }
    }
    
    cout << count;

    return 0;
}
