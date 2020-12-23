#include <iostream>

using namespace std;

void Penjumlahan() {
		
		int a;
		int b;
    	float hasil;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "+                         Penjumlahan                      +" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "  Masukan Angka Pertama = ";
        cin >> a;
        cout << "  Masukan Angka Kedua = ";
        cin >> b;
        hasil = a+b;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "  Nilai penjumlahan adalah= " << hasil << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "  Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}
void Pengurangan() {
		
		int a;
		int b;
    	float hasil;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "+                         Pengurangan                      +" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "  Masukan Angka Pertama = ";
        cin >> a;
        cout << "  Masukan Angka Kedua = ";
        cin >> b;
        hasil = a-b;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "  Nilai Pengurangan adalah= " << hasil << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "  Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}
void Perkalian() {
		
		int a;
		int b;
    	float hasil;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "+                          Perkalian                       +" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "  Masukan Angka Pertama = ";
        cin >> a;
        cout << "  Masukan Angka Kedua = ";
        cin >> b;
        hasil = a*b;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "  Nilai Perkalian adalah= " << hasil << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "  Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
 }
void Pembagian() {
		
		int a;
		int b;
    	float hasil;
    	
  		cout << endl;
    	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "+                          Pembagian                       +" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << endl;
        cout << "  Masukan Angka Pertama = ";
        cin >> a;
        cout << "  Masukan Angka Kedua = ";
        cin >> b;
        hasil = a/b;
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "  Nilai Pembagian adalah= " << hasil << endl;
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout << "  Klik ENTER untuk keluar" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

int main() {
	
		
		double pilihan;
		
  		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  		cout << "+                                                          +\n";
        cout << "+                    KALKULATOR SEDERHANA                  +\n";
        cout << "+                                                          +\n";
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  		cout << " Dibuat oleh    : Bima Maarschal\n";
  		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  		
        cout << endl;
        cout << "------------------------------------------------------------\n";
        cout << " Nomor pilihan menu program kalkulator: "<< endl;
        cout << "------------------------------------------------------------\n";
        cout << endl;
        cout << "| 1 | Penjumlahan "<< endl;
        cout << "| 2 | Pengurangan"<< endl;
        cout << "| 3 | Perkalian"<< endl;
        cout << "| 4 | Pembagian"<< endl;
        cout << endl;
        
		cout << "Silahkan masukkan angka pilihan anda: ";
		cin >> pilihan;
        
        if (pilihan == 1){
        	Penjumlahan();
		}else if(pilihan == 2){
			Pengurangan();
		}else if (pilihan == 3){
        	Perkalian();
		}else if (pilihan == 4){
        	Pembagian();
		}
		
  
  return 0;
}
