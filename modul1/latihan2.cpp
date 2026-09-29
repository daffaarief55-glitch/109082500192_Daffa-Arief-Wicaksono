#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka : ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Input harus dari 0 sampai 100.";
        return 0;
    }

    string satuan[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"
    };

    if (angka < 10) {
        cout << angka << " : " << satuan[angka];
    } else if (angka == 10) {
        cout << "10 : sepuluh";
    } else if (angka == 11) {
        cout << "11 : sebelas";
    } else if (angka < 20) {
        cout << angka << " : " << satuan[angka - 10] << " belas";
    } else if (angka < 100) {
        cout << angka << " : " << satuan[angka / 10] << " puluh";

        if (angka % 10 != 0) {
            cout << " " << satuan[angka % 10];
        }
    } else {
        cout << "100 : seratus";
    }

    return 0;
}
