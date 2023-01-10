#include <iostream>
using namespace std;
int main(){
	int pilihan;
	char p;
	double alas,tinggi,hasil;
	cout<<"Selamat datang di Kalkulator Luas Segitiga\n";
	cout<<"Rumus segitiga L=(1/2 x a x t)\n";
	kalkulator:
	cout<<"\n\n\n---Kalkulator---\n\n";
	cout<<"Masukkan Sisi Alas(cm): ";
	cin>>alas;
	cout<<"Masukkan Sisi Tinggi(cm): ";
	cin>>tinggi;
	hasil=alas*tinggi/2;
	cout<<"\n Maka hasilnya adalah "<<hasil<<"cm2";	
	cout<<"\nApakah Ingin Menggunakan Lagi(y/t)";
	cin>>p;
	if(p=='y'){
		goto kalkulator;
	}
	else{
	}
	cout<<"\n\nTerimakasih telah menggunakan kalkulator ini";
}
