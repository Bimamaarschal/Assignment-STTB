#include <iostream>

using namespace std;

int main(){
	
  float hasil_l, r;
  
  const float phi = 3.14;
  
  cout << "+++++++++++++++++++++++++++++++++++\n";
  cout << "Tugas Program Menghitung Luas Lingkaran\n";
  cout << "Nama    : Bima Maarschal Rizky Kurnia Fallah\n";
  cout << "NIP     : 20552011107\n";
  cout << "Kelas   : TIF RP 20-A\n";
  cout << "+++++++++++++++++++++++++++++++++++\n";
  
  cout << "Masukkan nilai jari-jari lingkaran: ";
  
  cin >> r;
  
  hasil_l = phi*r*r;
  
  cout << "Luas lingkaran adalah "<< hasil_l << endl;
  
  return 0;
  
}
