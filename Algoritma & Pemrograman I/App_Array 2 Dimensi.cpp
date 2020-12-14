#include <iostream>

using namespace std;  
  	

	int main() 
	{
		
	cout << "+++++++++++++++++++++++++++++++++++\n";
  	cout << "Tugas Rangkum ARRAY\n";
  	cout << "Nama    : Bima Maarschal Rizky Kurnia Fallah\n";
  	cout << "NIP     : 20552011107\n";
  	cout << "Kelas   : TIF RP 20-A\n";
  	cout << "+++++++++++++++++++++++++++++++++++\n";
  
  	int a[5][3] = {{20,3,23},{34,6,23},{77,88,54},{34,21,44},{23,18,32}};
	  
	  for(int i=0; i<5; i++){
	  	for(int j=0; j<3; j++){
	  		cout << "Data array[" << i << "][" << j << "] = " << a[i][j] << endl;
		  }
	  } 
  	
  	
  return 0;
  
} 
