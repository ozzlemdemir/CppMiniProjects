#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Bir sayı giriniz: "<<endl;
    cin>>a;
    if(a<=1){
        cout<<a<<" asal sayı değildir."<<endl;
        return 0;
    }
    else{
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                cout<<a<<" asal sayı değildir."<<endl;
                return 0;
            }
        }
        cout<<a<<" asal sayıdır."<<endl;
        return 0;
    }
    

}