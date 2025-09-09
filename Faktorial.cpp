#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Bir sayı giriniz: "<<endl;
    cin>>a;
    int sonuc=1;
    for(int i=a;i>1;i--){
        sonuc=sonuc*i;
    }
    cout<<a<<"! = "<<sonuc<<endl;
}