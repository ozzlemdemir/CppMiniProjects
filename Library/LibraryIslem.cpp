#include <iostream>
#include <fstream>
#include <string>
#include "Member.h"
#include "Kitap.cpp"
#include <vector>
using namespace std;

class LibraryIslem
{
public:
    void kitaplistesi()
    {
        cout << "Kitap Listesi:" << endl;
        ifstream dosya("AlinabilirKitap.txt");
        if (!dosya.is_open())
        {
            cout << "Hata: dosya acilamadi!" << endl;
        }
        string satir;
        while (getline(dosya, satir))
        {
            cout << satir << endl;
        }
    }

    void KitapAl()
    {
        ifstream dosya("AlinabilirKitap.txt");
        ofstream dosyaAlinamaz("AlinamazKitap.txt", ios::app);
        vector<string> kalanSatirlar;

        string kitapAdi;
        cout << "Almak istediğiniz kitabin adini giriniz: ";
        cin >> kitapAdi;

        string satir;
        bool bulundu = false;

        while (getline(dosya, satir))
        {
            size_t pos = satir.find('-');
            if (pos != string::npos)
            {
                string id = satir.substr(0, pos);
                string ad = satir.substr(pos + 1);

                if (ad == kitapAdi)
                {
                    dosyaAlinamaz << satir << endl;
                    bulundu = true;
                    cout << "Kitap bulundu ve AlinamazKitap.txt'ye taşındı!" << endl;
                    continue;
                }
            }

            kalanSatirlar.push_back(satir);
        }
        dosya.close();
        dosyaAlinamaz.close();

        ofstream yeniDosya("AlinabilirKitap.txt", ios::trunc);
        for (auto &s : kalanSatirlar)
        {
            yeniDosya << s << endl;
        }
        yeniDosya.close();

        if (!bulundu)
        {
            cout << "Kitap bulunamadi." << endl;
        }
    }

    void KitapBirak()
    {
        ifstream dosya("AlinamazKitap.txt");
        ofstream dosyaAlinabilir("AlinabilirKitap.txt", ios::app);
        vector<string> kalanSatirlar;

        string kitapAdi;
        cout << "Birakmak istediğiniz kitabin adini giriniz: ";
        cin >> kitapAdi;

        string satir;
        bool bulundu = false;

        while (getline(dosya, satir))
        {
            size_t pos = satir.find('-');
            if (pos != string::npos)
            {
                string id = satir.substr(0, pos);
                string ad = satir.substr(pos + 1);

                if (ad == kitapAdi)
                {
                    dosyaAlinabilir << satir << endl;
                    bulundu = true;
                    cout << "Kitap birakildi ve AlinabilirKitap.txt'ye tasindi!" << endl;
                    continue;
                }
            }

            kalanSatirlar.push_back(satir);
        }
        dosya.close();
        dosyaAlinabilir.close();

        ofstream yeniDosya("AlinamazKitap.txt", ios::trunc);
        for (auto &s : kalanSatirlar)
        {
            yeniDosya << s << endl;
        }
        yeniDosya.close();

        if (!bulundu)
        {
            cout << "Kitap bulunamadi." << endl;
        }
    }
};
