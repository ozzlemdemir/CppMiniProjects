#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int sayi = rand() % 100 + 1;
    int hak = 3;

    cout << "1 ile 100 arasinda bir sayi tuttum. Bakalim bilebilecek misin?" << endl;

    for (int i = 0; i < hak; i++) {
        int tahmin;
        cout << "Tahmininizi giriniz: ";
        cin >> tahmin;

        if (tahmin == sayi) {
            cout << "Tebrikler! Bildiniz." << endl;
            return 0; 
        } else if (tahmin < sayi) {
            cout << "Daha buyuk bir sayi soyleyin." << endl;
        } else {
            cout << "Daha kucuk bir sayi soyleyin." << endl;
        }

        cout << "Kalan hakkiniz: " << (hak - i - 1) << endl;
    }

    
    cout << "Uzgunum, bilemediniz. Tutulan sayi: " << sayi << endl;

    return 0;
}
