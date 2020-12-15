#include <iostream>

using namespace std;

int main()
{
    
    float hasil_volume,la,t;
    
    cout << "+++++++++++++++++++++++++++++++++++\n";
  	cout << "Tugas Program Menghitung Volume Prisma\n";
  	cout << "Nama    : Bima Maarschal Rizky Kurnia Fallah\n";
  	cout << "NIP     : 20552011107\n";
  	cout << "Kelas   : TIF RP 20-A\n";
  	cout << "+++++++++++++++++++++++++++++++++++\n";

    cout<<"Masukkan nilai luas alas prisma : "; 
	
	cin>>la;
   
    cout<<"Masukkan nilai tinggi prisma : ";
    
	cin>>t;
   
    hasil_volume = la*t;
    
    cout<<"\n\nVolume prisma adalah "; cout<<hasil_volume; cout<<" cm3";
    
    return 0;
} 
