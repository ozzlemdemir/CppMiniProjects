#include <iostream>
using namespace std;

void Ekok(int sayi1, int sayi2)
{
    int eb = 1;
    int bolenler1[100] = {0}, bolenler2[100] = {0};
    for (int i = 2; i <= sayi1; i++)
    {
        if (sayi1 % i == 0)
        {
            bolenler1[i - 2] = i;
        }
    }
    for (int i = 2; i <= sayi2; i++)
    {
        if (sayi2 % i == 0)
        {
            bolenler2[i - 2] = i;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (bolenler1[i] == bolenler2[j] && bolenler1[i] != 0)
            {
                eb = bolenler1[i];
            }
        }
    }

    int ek = (sayi1 * sayi2) / eb; 
    cout << sayi1 << " ve " << sayi2 << " sayılarının en küçük ortak katı: " << ek << endl;
}
int main()
{
    int a, b;
    cout << "Iki sayi giriniz: ";
    cin >> a >> b;
    Ekok(a, b);
    return 0;
}
