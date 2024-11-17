#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    double *num = new double[n];
    double max;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];

        if (i == 0)
            max = num[i];
        else 
        {
            if (num[i] > max)
                max = num[i];
        } 
    }

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (num[i] / max * 100);
    }
    
    cout << sum / n;

    delete[] num;
    
    return 0;
}
