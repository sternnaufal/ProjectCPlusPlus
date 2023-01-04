#include <iostream>
using namespace std;
int main(){
	//Vp= Volume jika dikali dengan konstanta pi 3.14
	//vb= Volume jika dikali dengan pi 22/7 
	double r,t,Vp,Vb;
	int pilihan,p;
	const double pi = 3.14159265358979323846;
	cout<<"Selamat datang di Kalkulator Volume Kerucut,Bola,Tabung";
	menu:
	cout<<"\nSilahkan pilih bangun yang ingin diukur";
	cout<<"\n1.Kerucut";
	cout<<"\n2.Bola";
	cout<<"\n3.Tabung\n";
	cout<<"Pilihanmu->";
	cin>>pilihan;
		if(pilihan==1){
			cout<<"Kamu memilih volume kerucut...";
			goto kerucut;
		}
		else if(pilihan==2){
			cout<<"Kamu memilih volume bola...";
			goto bola;
		}
		else if(pilihan==3){
			cout<<"Kamu memilih volume Tabung...";
			goto tabung;
		}
		else {
			cout<<"Masukkan Nomor dengan benar! (1-3)";
			goto menu;
		}
	kerucut:
		cout<<"\n\n---Kalkulator Kerucut---\n";
		cout<<"Masukkan jari-jari(cm):";
		cin>>r;
		cout<<"\nMasukkan Tinggi(cm):";
		cin>>t;	
		Vb=r*r*t*1/3*22/7;
		Vp=r*r*t*1/3*pi;
		cout<<"\nMaka volume kerucut adalah(jika pi 22/7): "<<Vb<<"cm3";
		cout<<"\nMaka volume kerucut adalah(jika pi 3.14): "<<Vp<<"cm3\n";
		cout<<"Apakah kamu ingin kembali?"<<endl;
		cout<<"1.Tidak, ulang lagi menggunakan kalkulator ini"<<endl;
		cout<<"2.Iya, kembali ke menu kalkulator lagi"<<endl;
		cout<<"3.Aku sudah cukup menggunakan program ini,akhiri"<<endl;
		cout<<"Pilihanmu->";
		cin>>p;
		if(p==1){
			cout<<"\nBaiklah\n";
			goto kerucut;
		}
		else if(p==2){
			cout<<"\nKembali ke menu\n";
			goto menu;
		}
		else if(p==3){
			goto terimakasih;
		}
	bola:
		cout<<"\n\n---Kalkulator Bola---\n";
		cout<<"Masukkan jari-jari(cm):";
		cin>>r;	
		Vb=r*r*r*4/3*22/7;
		Vp=r*r*r*4/3*pi;
		cout<<"\nMaka volume bola adalah(jika pi 22/7): "<<Vb<<"cm3";
		cout<<"\nMaka volume bola adalah(jika pi 3.14): "<<Vp<<"cm3\n";
		cout<<"Apakah kamu ingin kembali?"<<endl;
		cout<<"1.Tidak, ulang lagi menggunakan kalkulator ini"<<endl;
		cout<<"2.Iya, kembali ke menu kalkulator lagi"<<endl;
		cout<<"3.Aku sudah cukup menggunakan program ini,akhiri"<<endl;
		cout<<"Pilihanmu->";
		cin>>p;
		if(p==1){
			cout<<"\nBaiklah\n";
			goto kerucut;
		}
		else if(p==2){
			cout<<"\nKembali ke menu\n";
			goto menu;
		}
		else if(p==3){
			goto terimakasih;
		}
	tabung:
		cout<<"\n\n---Kalkulator Tabung---\n";
			cout<<"Masukkan jari-jari(cm):";
		cin>>r;
		cout<<"\nMasukkan Tinggi(cm):";
		cin>>t;	
		Vb=r*r*t*22/7;
		Vp=r*r*t*pi;
		cout<<"\nMaka volume tabung adalah(jika pi 22/7): "<<Vb<<"cm3";
		cout<<"\nMaka volume tabung adalah(jika pi 3.14): "<<Vp<<"cm3\n";
		cout<<"Apakah kamu ingin kembali?"<<endl;
		cout<<"1.Tidak, ulang lagi menggunakan kalkulator ini"<<endl;
		cout<<"2.Iya, kembali ke menu kalkulator lagi"<<endl;
		cout<<"3.Aku sudah cukup menggunakan program ini,akhiri"<<endl;
		cout<<"Pilihanmu->";
		cin>>p;
			if(p==1){
			cout<<"\nBaiklah\n";
			goto kerucut;
		}
		else if(p==2){
			cout<<"\nKembali ke menu\n";
			goto menu;
		}
		else if(p==3){
			goto terimakasih;
		}
	terimakasih:
		cout<<"\nTerimakasih telah menggunakan program ini";
}
