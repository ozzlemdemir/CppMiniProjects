#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Member.h"
#include "LibraryIslem.cpp"

int main()
{
    cout << "Kutuphanemize Hosgeldiniz" << endl;
    cout << "Lutfen Giris Yapiniz" << endl;
    cout << "Kullanici Adi: ";
    string ad;
    cin >> ad;
    cout << "Sifre: ";
    string sifre;
    cin >> sifre;

    ifstream dosya("Member.txt");
    if (!dosya.is_open())
    {
        cout << "Hata: dosya acilamadi!" << endl;
        return 1;
    }

    string dosyaAd, dosyaSifre;
    int id;
    bool bulundu = false;

    while (dosya >> dosyaAd >> dosyaSifre >> id)
    {
        if (dosyaAd == ad && dosyaSifre == sifre)
        {
            bulundu = true;
            girisYapan.name = dosyaAd;
            girisYapan.password = dosyaSifre;
            girisYapan.id = id;
            break;
        }
    }

    dosya.close();

    if (bulundu)
    {
        cout << "Giris Basarili" << endl;
        cout << "Hosgeldiniz, " << girisYapan.name << endl;

        LibraryIslem islem;
        char secim;
        char devam;

        do
        {
            cout << "\nYapmak istediginiz islemi seciniz:" << endl;
            cout << "1 - Kitap Listesi Görüntüleme" << endl;
            cout << "2 - Kitap Alma" << endl;
            cout << "3 - Kitap Birakma" << endl;
            cout << "4 - Cikis" << endl;
            cin >> secim;

            if (secim == '1')
            {
                  islem.kitaplistesi();
                  cout<<"Kitap listesi gosterildi"<<endl;    
            }
            else if (secim == '2')
            {
                  islem.KitapAl();
                  cout<<"Kitap alindi"<<endl;
            }
            else if (secim == '3')
            {
                islem.KitapBirak();
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