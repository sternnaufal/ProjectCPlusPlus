#include <iostream>
using namespace std;
int main(){
	int angka,hasil;
	cout<<"Masukkan angka yang kamu cek:";
	cin>>angka;
	hasil=angka%2;
	if(hasil==1){
		cout<<endl<<angka<<" termasuk angka ganjil.";
	}
	else if(hasil==0){
		cout<<endl<<angka<<" termasuk angka genap.";
	}
return 0;}
