#include <iostream>
using namespace std;
int main(){
	int ng,mg,sp,st,br;
	int total;
	
	char pilihan;
	cout<<"----------------------------\n";
	cout<<"Selamat Datang di Restoran\n";
	cout<<"Menu                		 Harga\n\n";
	cout<<"Nasi Goreng			10.000\n";
	cout<<"Mie Goreng			8.000\n";
	cout<<"Sphagetti			12.000\n";
	cout<<"Sate				10.000\n";
	cout<<"Burger				15.000\n";
	cout<<"Apakah kamu ingin memesan sesuatu?(y/t)";
	cin>>pilihan;
	if(pilihan=='y'){
		cout<<"Nasi Goreng :";
		cin>>ng;
		cout<<"Mie Goreng :";
		cin>>mg;
		cout<<"Sphagetti :";
		cin>>sp;
		cout<<"Sate :";
		cin>>st;
		cout<<"Burger :";
		cin>>br;
		goto harga;
	}
	else if(pilihan=='t'){
		cout<<"Terimakasih...";
	}
	harga:
		ng=ng*10000;
		mg=mg*8000;
		sp=sp*12000;
		st=st*10000;
		br=br*15000;
		total=ng+mg+sp+st+br;
	cout<<"\n\nTotal yang harus kamu bayar adalah Rp."<<total;
		
	
	}
