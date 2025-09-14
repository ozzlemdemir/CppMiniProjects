#include <iostream>
#include "Member.h"
using namespace std;

class BankaIslem
{
public:
    void bakiyeGoruntuleme(int bakiye){
        cout<<"Bakiyeniz: "<<bakiye<<endl;
    }
    int paraYatirma(int bakiye){
        int yatirilacakTutar;
        cin>>yatirilacakTutar;
        bakiye=bakiye+yatirilacakTutar;
        cout<<"Yeni Bakiyeniz: "<<bakiye<<endl;
        return bakiye;
    }
    int paraCekme(int bakiye){
        int cekilecekTutar;
        cin>>cekilecekTutar;
        if(cekilecekTutar>bakiye){
            cout<<"Yetersiz Bakiye"<<endl;
            return bakiye;
        }
        else{
            bakiye=bakiye-cekilecekTutar;
            cout<<"Yeni Bakiyeniz: "<<bakiye<<endl;
            return bakiye;
        }
    }

};

