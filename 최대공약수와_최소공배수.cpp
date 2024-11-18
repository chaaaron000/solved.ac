#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    int min = (n < m ? n : m);

    // 최대 공약수
    for (int i = min; i > 0; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            cout << i << '\n';
            break;
        }
    }

    // 최소 공배수
    int mul = 1;
    while (true)
    {
        // 공약수 구하기
        int div = 1;
        for (int i = 2; i <= n && i <= m; i++)
        {
            if (n % i == 0 && m % i == 0)
            {
                div = i;
                break;
            }
        }

        // 1을 제외하고 공약수가 없음
        if (div == 1)
        {
            mul = mul * n * m;
            break;
        }

        mul *= div;
        n /= div;
        m /= div;
    }

    cout << mul;
    
    return 0;
}
