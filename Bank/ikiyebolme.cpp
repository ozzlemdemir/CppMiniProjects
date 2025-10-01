
#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01


double func(double x)
{
    return x*x*x - x*x + 2;
}

//a alt sınır b üst sınır
void hesapla(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "Kok yok\n";
        return;
    }

    double y = a;
    while ((b-a) >= EPSILON)
    {
        //yeni orta nokta
        y = (a+b)/2;

        // y kök mü bak
        if (func(y) == 0.0)
            break;

        // y nin alt mı yoksa üst sınır mıdır karar verdik
        else if (func(y)*func(a) < 0)
            b = y;
        else
            a = y;
    }
    cout << "Kök değeri: " << y;
}


int main()
{
    
    double a =-200, b = 300;
    hesapla(a, b);
    return 0;
}