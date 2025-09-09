#include <iostream>
using namespace std;
int main(){
    int a;
    int dizi[a];
    cout<<"Kaç sayı gireceksiniz?"<<endl;
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<i+1<<". sayıyı giriniz: "<<endl;
        cin>>dizi[i];
    }

    int enBuyuk=dizi[0];
    for(int j=1;j<a;j++){
        if(dizi[j]>enBuyuk){
            enBuyuk=dizi[j];
        }
        else{
            continue;
        }
    }
    cout<<"En büyük sayı: "<<enBuyuk<<endl;
}