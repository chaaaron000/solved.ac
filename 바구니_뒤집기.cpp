#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    int* num = new int[n];
    for (int i = 0; i < n; i++)
    {
        num[i] = i + 1;
    }

    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        for (int j = 0; j < (b - a + 1) / 2; j++)
        {
            swap(num[a-1+j], num[b-1-j]);
        }
    }
    
    for (int i = 0; i < n; i++)
        cout << num[i] << " ";

    delete[] num;

    return 0;
}
