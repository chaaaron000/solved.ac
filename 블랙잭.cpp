#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    int card[n];
    for (int i = 0; i < n; i++)
        cin >> card[i];

    int sum, diff;
    int maxSum, maxDiff = m;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum = card[i] + card[j] + card[k];
                diff = m - sum;

                if (diff >= 0 && diff < maxDiff)
                {
                    maxSum = sum;
                    maxDiff = diff;
                    if (maxDiff == 0)
                        break;
                }
            }
        }
    }

    cout << maxSum;
    
    return 0;
}
