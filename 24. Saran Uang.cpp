#include <iostream>
using namespace std;
int main(){
	int uang;
	cout<<"Berapa uangmu?";
	cin>>uang;
	if(uang==0){
		cout<<"Mending Tidur";
	}
	else if(uang<=10000){
		cout<<"Beli Permen aja kali ya?";
	}
	else if(uang<=50000){
		cout<<"Beli Makanan Enak bisa kali";
	}
	else if(uang<=500000){
		cout<<"Nabung aja dulu";
	}
	else if(uang>=500000){
		cout<<"Beli Keperluan buat Sebulan";
	}
	else if(uang>=10000000){
		cout<<"Beli Hape yuks";
	}
	else if(uang>=10000000){
		cout<<"Beli IPhone sabi tuh";
	}
	else if(uang>=100000000){
		cout<<"Dahlaah";
	}
}
