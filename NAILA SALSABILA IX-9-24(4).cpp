#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace atd;
int main()
( 
  //mendeklarasikan teksl dan teks2
  char teksi[10], teks2{10};
  int jlhdepan, jihkel, jihhuruf;
 
  //menampilkan pesan u/ meminta masukan dari pengguna
  cout << "Masukkan Nama Depan Anda?": ";
  cin >> teksl;
  cout << "Masukkan Nama Keluarga Anda?: ";
  cin >> teks2;
  //menghitung panjang teks
  jlhdepan = strlen(teks1);
  jlhkel = strlen(teks2);
  jlhhuruf = jlhdepan + jlhkel;
  
  //menampilkan hasil ke pengguna 
cout << "Nama Lengkap Anda: " << teks1 << " " << teks2 <<
endl;
cout << "Jumlah Huruf Nama Anda : " << jlhhuruf << " Huruf"
<<endl;
	system ("PAUSE");
	return 0;
}
 
