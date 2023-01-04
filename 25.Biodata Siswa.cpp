#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Biodata Siswa     ##" << endl;
  cout << "====================================" << endl;
  cout << endl;
 
  string nama, nisn,jk,jurusan,kelas,kota_asal,alamat;
 
  cout << "Nama Siswa: ";
  getline(cin,nama);
 
  cout << "NISN: ";
  getline(cin,nisn);
 
  cout << "Jurusan: ";
  getline(cin,jurusan);
  
  cout<<"Kelas: ";
  getline(cin,kelas);
  
  cout<<"Jenis Kelamin: ";
  getline(cin,jk);
 
  cout << "Kota Asal: ";
  getline(cin,kota_asal);
 
  cout << "Alamat: ";
  getline(cin,alamat);
 
  cout << endl;
 
  cout << "# Data Siswa #"       	 << endl;
  cout << "=================="       << endl;
  cout << "Nama: "      << nama      << endl;
  cout << "NISN: "      << nisn      << endl;
  cout << "Jurusan: "   << jurusan   << endl;
  cout << "Kelas: "		<<kelas		 <<endl;
  cout <<"Jenis Kelamin: "<< jk 	 <<endl;
  cout << "Kota Asal: " << kota_asal << endl;
  cout << "Alamat: "    << alamat    << endl;
 
  return 0;
}
