#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int tShirts[6];
    int t, p;

    cin >> n;
    for (int i = 0; i < 6; i++)
        cin >> tShirts[i];
    cin >> t >> p;

    int shirtsCount = 0;
    int tBundle = 0;
    for (int shirt : tShirts)
    {
        shirtsCount += shirt;

        tBundle += (shirt / t) + 1;

        // 만약 세트가 딱 맞는 경우
        if (shirt % t == 0) 
            tBundle--;
    }
    
    cout << tBundle << '\n';

    // 펜은 세트대로 발주받는게 아님
    cout << shirtsCount / p << ' ' << shirtsCount % p;
    
    return 0;
}
