#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Iki sayi giriniz: ";
    cin >> a >> b;
    Ebob(a, b);
    return 0;
}  
void Ebob(int sayi1, int sayi2)
    {
        int eb = 1;
        int bolenler1[100], bolenler2[100];
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
        cout << sayi1 << " ve " << sayi2 << " sayılarının en büyük ortak böleni: " << eb << endl;
    }
