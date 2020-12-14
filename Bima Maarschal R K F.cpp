#include <iostream>
using namespace std;
int main(){
  int a[100], i, n;
  float rata, total=0, persen;
  cout << "Masukkan banyaknya nilai: ";
  cin >> n;
  for(i=0; i<n; i++){
    cout << "Nilai Ke-" << i+1 << " : ";
    cin >> a[i];
    total = total + a[i];
  }
  rata = total/2;
  persen = total/100;
  cout << "Hasil nilai total adalah : " << total << endl;
  cout << "Hasil persen rata-rata adalah : " << persen << endl;
  cout << "Hasil rata-rata pembagian 2 adalah : " << rata << endl;
  return 0;
}
