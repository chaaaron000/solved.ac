#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float num[20];
    string ratings[20];
    float creditSum = .0f;
    float totalSum = .0f;
    int count = 20;

    for (int i = 0; i < 20; i++)
    {
        string temp;
        float credit;
        string rating;
        cin >> temp >> credit >> rating;

        creditSum += credit;

        if (rating.compare("A+") == 0)
            totalSum += credit * 4.5f;
        else if (rating.compare("A0") == 0)
            totalSum += credit * 4.0f;
        else if (rating.compare("B+") == 0)
            totalSum += credit * 3.5f;
        else if (rating.compare("B0") == 0)
            totalSum += credit * 3.0f;
        else if (rating.compare("C+") == 0)
            totalSum += credit * 2.5f;
        else if (rating.compare("C0") == 0)
            totalSum += credit * 2.0f;
        else if (rating.compare("D+") == 0)
            totalSum += credit * 1.5f;
        else if (rating.compare("D0") == 0)
            totalSum += credit * 1.0f;
        else if (rating.compare("F") == 0)
            totalSum += credit * 0.0f;
        else if (rating.compare("P") == 0)
            creditSum -= credit;
    }

    cout << totalSum / creditSum;
    
    return 0;
}
