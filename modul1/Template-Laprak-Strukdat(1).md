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

### 1. (isi dengan soal unguided 1)
Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.
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
[![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)](https://github.com/daffaarief55-glitch/109082500192_Daffa-Arief-Wicaksono/blob/main/modul1/output/output_latihan1.png)



##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 1 

### 2. (isi dengan soal unguided 2)

```C++
source code unguided 2
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 2_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided2-1.png)

##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 2

### 3. (isi dengan soal unguided 3)

```C++
source code unguided 3
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 3_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided3-1.png)

##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 3

## Kesimpulan
...

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
