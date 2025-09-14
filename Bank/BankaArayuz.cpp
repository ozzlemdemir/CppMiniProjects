#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Member.h"
#include "BankaIslem.cpp"

int main()
{
    cout << "Bankamiza Hosgeldiniz" << endl;
    cout << "Lutfen Giris Yapiniz" << endl;
    cout << "Kullanici Adi: ";
    string ad;
    cin >> ad;
    cout << "Sifre: ";
    string sifre;
    cin >> sifre;

    ifstream dosya("members.txt");
    if (!dosya.is_open())
    {
        cout << "Hata: members.txt dosyasi acilamadi!" << endl;
        return 1;
    }

    string dosyaAd, dosyaSifre;
    int Bakiye;
    bool bulundu = false;

    while (dosya >> dosyaAd >> dosyaSifre >> Bakiye)
    {
        if (dosyaAd == ad && dosyaSifre == sifre)
        {
            bulundu = true;
            girisYapan.name = dosyaAd;
            girisYapan.password = dosyaSifre;
            girisYapan.bakiye = Bakiye;
            break;
        }
    }

    dosya.close();

    if (bulundu)
    {
        cout << "Giris Basarili" << endl;
        cout << "Hosgeldiniz, " << girisYapan.name << endl;

        BankaIslem islem;
        char secim;
        char devam;

        do
        {
            cout << "\nYapmak istediginiz islemi seciniz:" << endl;
            cout << "1 - Bakiye Goruntuleme" << endl;
            cout << "2 - Para Yatirma" << endl;
            cout << "3 - Para Cekme" << endl;
            cout << "4 - Cikis" << endl;
            cin >> secim;

            if (secim == '1')
            {
                islem.bakiyeGoruntuleme(girisYapan.bakiye);
                
                
            }
            else if (secim == '2')
            {
                girisYapan.bakiye = islem.paraYatirma(girisYapan.bakiye);
            }
            else if (secim == '3')
            {
                girisYapan.bakiye = islem.paraCekme(girisYapan.bakiye);
            }
            else if (secim == '4')
            {
                cout << "Cikis yapiliyor..." << endl;
                break; 
            }
            else
            {
                cout << "Gecersiz islem!" << endl;
            }

            cout<<"İslemlere devam etmek istiyor musunuz? (e/h): ";
            cin>>devam;
        }while(devam=='e' || devam=='E');
    }
    
    else
    {
        cout << "Giris Basarisiz" << endl;
    }

    return 0;
}