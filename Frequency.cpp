#include <iostream>
using namespace std;
#define MAX 100

int main() {
    int dizi[MAX];
    cout << "Dizi eleman sayısını giriniz: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> dizi[i];
    }

    for (int i = 0; i < n; i++) {
        bool onceSayildi = false;
        
        for (int k = 0; k < i; k++) {
            if (dizi[i] == dizi[k]) {
                onceSayildi = true;
                break;
            }
        }
        if (onceSayildi) continue; 
        int sayac = 0;
        for (int j = 0; j < n; j++) {
            if (dizi[i] == dizi[j]) {
                sayac++;
            }
        }
        cout << dizi[i] << " sayisi dizide " << sayac << " kere geciyor." << endl;
    }
}
