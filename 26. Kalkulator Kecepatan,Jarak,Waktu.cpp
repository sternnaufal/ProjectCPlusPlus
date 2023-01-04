#include <iostream>
using namespace std;
int main(){
	float v,s,t;
	int pilihan;
	cout<<"Selamat datang di kalkulator vst\n\n";
	cout<<"Pilih yang akan dicari...\n";
	cout<<"1. Kecepatan(v).\n";
	cout<<"2. Jarak(s).\n";
	cout<<"3. Waktu(t).\n";
	cin>>pilihan;
	if(pilihan==1){
		cout<<"Masukkan Jarak (km): ";
		cin>>s;
		cout<<"Masukkan Waktu (jam): ";
		cin>>t;
		v=s/t;
		cout<<"\n\nMaka Kecepatannya adalah "<<v<<" km/jam";	
	}
	
	else if(pilihan==2){
		cout<<"Masukkan Kecepatan (km/jam): ";
		cin>>v;
		cout<<"Masukkan Waktu (jam): ";
		cin>>t;
		s=v*t;
		cout<<"\n\nMaka Jaraknya adalah "<<s<<" km";	
	}
	
	else if(pilihan==3){
		cout<<"Masukkan Kecepatan (km/jam): ";
		cin>>v;
		cout<<"Masukkan Jarak (km): ";
		cin>>s;
		t=v/s;
		cout<<"\n\nMaka Waktu tempuhnya adalah "<<t<<"km/jam";	
	}
}
