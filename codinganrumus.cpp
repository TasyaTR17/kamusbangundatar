#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

    float alas, tinggi, jari_jari;
    char tipe, lanjut;
    //kalau lanjut = 1, maka looping do. Tetapi kalau lanjut = 0, maka program berhenti//

    do
    {
        cout << "Berikut ini adalah program untuk menghitung operasi bangun ruang. \n Tekan enter untuk memulai";
        cout << "\n Tekan 1 untuk menghitung luas segitiga atau \n tekan 2 untuk menghitung luas lingkaran";
        cin >> tipe;

        switch(tipe) {
            case '1':
                cout << "\n Masukan Alas: ";
                cin >> alas;
                cout << "\n Masukan Tinggi: ";
                cin >> tinggi;
                cout << alas << " * " << tinggi << " * " << " 0.5 " << " = " << alas*tinggi*0.5;
                break;

            case '2':
                cout << "\n Masukan jari-jari: ";
                cin >> jari_jari;
                cout << 3.14 << " * " << jari_jari << " * " << jari_jari << " = " << 3.14*jari_jari*jari_jari;
                break;
        
            default:
                cout << "Error! opsi tidak ditemukan";
                break;
        }

        cout << "\n Tekan 1 untuk lanjut lagi atau tekan 0 untuk berhenti";
        cin >> lanjut;

    } 
    
    while (lanjut == '1');
   
    return 0;

}