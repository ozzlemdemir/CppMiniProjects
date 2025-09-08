#include <iostream>
using namespace std;
int main(){
    int sayi1, sayi2, a;
    cout << "1. sayiyi giriniz: "<<endl;
    cin >> sayi1;
    cout << "2. sayiyi giriniz: "<<endl;
    cin >> sayi2;
    cout<< "İşlemi giriniz" <<endl;
    cout<< "1-Toplama\n2-Çarpma\n3-Bölme\n4-Çıkarma"<<endl;
    cin >> a;
    if(a==1){
        cout<<sayi1+sayi2<<endl;
    }
    else if(a==2){
        cout<<sayi1*sayi2<<endl;
    }
    else if(a==3){
        if(sayi2==0){
            cout<<"Bir sayı 0'a bölünemez."<<endl;
            return 0;
        }   
        else{
            if(sayi1%sayi2!=0){
                cout<<(float)sayi1/sayi2<<endl;
                return 0;
            }   
            cout<<sayi1/sayi2<<endl;
        }
        
    }
    else if(a==4){
        cout<<sayi1-sayi2<<endl;
    }
    else{
        cout<<"Hatalı işlem girdiniz."<<endl;
    }


}
