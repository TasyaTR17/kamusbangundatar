#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

    float alas, tinggi, jari_jari, luas;
    char tipe;

    cout << "Berikut ini adalah program untuk menghitung operasi bangun ruang. Tekan enter untuk memulai";
    cout << "Tekan \n1 untuk menghitung luas segitiga atau tekan \n2 untuk menghitung luas lingkaran";
    cin >> tipe;

     switch(tipe) {
        case '1':
            cout << alas << " * " << tinggi << " * " << " 0.5 " << " = " << alas*tinggi*0.5;
            break;

        case '2':
            cout << 3.14 << " * " << jari_jari << jari_jari << " = " << 3.14*jari_jari*jari_jari;
            break;
        
        default:
            cout << "Error! operator is undefine";
            break;
     }
    
    return 0;

}