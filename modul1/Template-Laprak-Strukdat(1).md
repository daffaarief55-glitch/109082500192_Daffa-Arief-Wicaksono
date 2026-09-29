# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Muhammad Dhimas Hafizh Fathurrahman - 2311102151</p>

## Dasar Teori
isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku [] untuk pernyataan yang mengambil refernsi dari jurnal).
contoh :
Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas[1]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

### A. Operator<br/>
Operator adalah simbol untuk mengolah data. Operasi aritmatika termasuk materi awal yang dipelajari di C++[1].
#### 1. Operator Aritmatika dan Penugasan
Operator aritmatika terdiri dari +, -, *, /, dan % (sisa bagi). Tanda kurung mengatur urutan pengerjaan, misalnya (A + B)/(C + D). Operator penugasan = memindahkan nilai ke variabel. Bentuk singkatnya, seperti A += 7, sama dengan A = A + 7.
#### 2. Operator Logika dan Hubungan
Operator hubungan (==, !=, <, >, <=, >=) membandingkan dua nilai. Operator logika && (AND), || (OR), dan ! (NOT) menggabungkan kondisi. Keduanya menghasilkan nilai benar atau salah.

### B. Tipe Data, Variabel, dan Konstanta<br/>
...
#### 1.Variabel
Variabel menyimpan nilai yang bisa berubah selama program berjalan. Tulis deklarasinya dengan bentuk tipe_data nama_variabel;. Anda bisa mengisi nilai awal saat deklarasi, misalnya int x = 20;.
#### 2.Konstanta
Konstanta menyimpan nilai tetap yang tidak boleh berubah. Buat konstanta dengan kata kunci const (misalnya const float phi = 3.14;) atau dengan
#### 3. Pemodifikasi Tipe
Type modifier mengubah jangkauan atau kapasitas sebuah tipe. unsigned hanya menerima nilai non-negatif, sedangkan short dan long mengecilkan atau membesarkan kapasitas.




## Unguided 

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
#include <iostream>
using namespace std;
int main(){
  float angka1,angka2,hasil1,hasil2,hasil3,hasil4;
  cout<<"masukan angka : ";
  cin>> angka1;

  cout<<"masukan angka : ";
  cin>> angka2;

  hasil1 = angka1 + angka2;
  hasil2 = angka1 - angka2;
  hasil3 = angka1 * angka2;
  hasil4 = angka1 / angka2;

  cout<<"hasil penjumlahan nyua adalah :" <<hasil1 << endl;
  cout<<"hasil pengurangan nya adalah :" <<hasil2 << endl;
  cout<< "hasil perkalian nya adalah :"<<hasil3 << endl;
  cout<<"hasil pembagian nya adalah :" <<hasil4 << endl;

return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Output Latihan 1](https://github.com/daffaarief55-glitch/109082500192_Daffa-Arief-Wicaksono/blob/main/modul1/output/output_latihan1.png?raw=true)


##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

Program ini meminta dua angka, lalu menampilkan hasil tambah, kurang, kali, dan bagi dari keduanya. Angka disimpan di variabel bertipe float supaya bilangan desimal tetap bisa dipakai. cout menampilkan tulisan di layar, cin menerima angka yang Anda ketik, dan operator +, -, *, / menghitung hasilnya.

### 2.Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100 contoh:

```C++
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
```
### Output Unguided 2 :

##### Output 1
![output_latihan2](https://github.com/daffaarief55-glitch/109082500192_Daffa-Arief-Wicaksono/blob/main/modul1/output/output_latihan2.png?raw=true)



##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

Program ini meminta satu angka dari 0 sampai 100, lalu menuliskannya dengan kata-kata. Angka 0 sampai 9 disimpan dalam daftar kata (satuan), jadi angka 3 tinggal diambil kata "tiga" dari daftar itu. Program memakai if untuk memilah angka. Angka di luar 0 sampai 100 ditolak. Angka 10 dan 11 punya kata sendiri, yaitu "sepuluh" dan "sebelas". Angka 12 sampai 19 memakai satuannya lalu ditambah "belas", misalnya 15 jadi "lima belas". Angka 20 sampai 99 dibagi 10 untuk mengambil puluhannya, lalu dicek sisa baginya dengan % untuk mengambil satuannya, jadi 79 menjadi "tujuh puluh sembilan". Angka 100 langsung ditulis "seratus".

### 3. input: 3
output:
3 2 1 * 1 2 3
  2 1 * 1 2
    1 * 1
      *

```C++
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "input: ";
    cin >> n;
    cout << "output:" << endl;

   
    for (int i = n; i >= 1; i--) {
        
       
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        
        cout << "* ";

        
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }

        
        cout << endl;
    }

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
![output_latihan3](https://github.com/daffaarief55-glitch/109082500192_Daffa-Arief-Wicaksono/blob/main/modul1/output/output_latihan3.png?raw=true)


contoh :
![Screenshot Output Unguided 3_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided3-1.png)

##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

Program ini meminta satu angka n, lalu mencetak pola angka yang makin pendek ke bawah. Perulangan luar memakai i yang mulai dari n dan turun sampai 1, jadi i menentukan jumlah baris. Di setiap baris, perulangan pertama mencetak angka dari i turun ke 1, misalnya 3 2 1. Lalu program mencetak tanda *. Perulangan kedua mencetak angka dari 1 naik ke i, misalnya 1 2 3. endl memindahkan kursor ke baris baru. Untuk n = 3, hasilnya tiga baris: 3 2 1 * 1 2 3, 2 1 * 1 2, dan 1 * 1.

## Kesimpulan
...

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
