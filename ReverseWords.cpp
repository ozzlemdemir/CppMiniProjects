#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cout << "Bir kelime veya cümle giriniz: " << endl;
    getline(cin, word); 
    int c = word.length();

    char dizi1[c+1];
    char dizi2[c+1];

    strcpy(dizi1, word.c_str());

    for(int i=0; i<c; i++)
    {
        dizi2[i] = dizi1[c-i-1];
    }
    dizi2[c] = '\0'; 

    cout << "Girdiğiniz kelime veya cümle: " << dizi1 << endl;

    cout << "Ters hali: " << dizi2 << endl;

    return 0;

}