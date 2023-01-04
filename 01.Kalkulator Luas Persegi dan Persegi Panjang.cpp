#include <iostream>
using namespace std;
int main(){
	int pilihan;
	char p;
	double lebar,panjang,sisi,hasil;
	cout<<"Selamat datang di Kalkulator Luas Persegi dan Persegi Panjang";
	kalkulator:
	cout<<"\nPilih angka untuk Kalkulator :";
	cout<<"\n 1. Persegi";
	cout<<"\n 2. Persegi Panjang";
	cout<<"\n Jawabannya ->";
	cin>>pilihan;
	if(pilihan==1){
	cout<<"Anda Memilih kalkulator luas persegi...\n\n";
	cout<<"Masukkan Sisi(cm): ";
	cin>>sisi;
	hasil=sisi*sisi;
	cout<<"\n Maka hasilnya adalah "<<hasil<<"cm2";
	}
	else if(pilihan==2){
		cout<<"Anda Memilih kalkulator luas persegi panjang...\n\n";
		cout<<"Masukkan Panjang(cm): ";
		cin>>panjang;
		cout<<"Masukkan Lebar(cm): ";
		cin>>lebar;
		hasil=panjang*lebar;
	cout<<"\n Maka hasilnya adalah "<<hasil<<"cm2";
	}
	cout<<"\nApakah Ingin Menggunakan Lagi(y/t)";
	cin>>p;
	if(p=='y'){
		goto kalkulator;
	}
	else{
	}
	cout<<"\n\nTerimakasih telah menggunakan kalkulator ini";
}
