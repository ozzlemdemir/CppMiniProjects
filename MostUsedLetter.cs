#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    char alfabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    string word;
    cout << "Kelime giriniz: ";
    cin >> word;
    int a = word.length();
    char dizi1[a + 1];
    strcpy(dizi1, word.c_str());

    int counter[26] = { 0 };

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 26; j++) {
            if (toupper(dizi1[i]) == alfabet[j]) {
                counter[j]++;
            }
            else {
                continue;
            }
        }
    }
    int max = counter[0];
    int index = 0;
    for (int k = 1; k < 26; k++) {
        if (counter[k] > max) {
            max = counter[k];
            index = k;
        }

    }
    cout << "En cok kullanilan harf: " << alfabet[index] << " " << max << " kere kullanilmistir." << endl;
    return 0;
    
}