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
