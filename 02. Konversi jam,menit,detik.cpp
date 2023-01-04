#include <iostream>
using namespace std;
int main (){
        int jam;
        int menit;
        int detik;
        int a, b, c,hasil;
        cout<<"Selamat datang di Konversi Jam, Menit, Detik";
        cout<<"\n*Contoh : 1 jam, 10 menit, 30 detik= 4230 detik";
        cout<<"\nMasukkan Jam: ";
        cin>>a;
        cout<<"Masukkan Menit: ";
        cin>>b;
        cout<<"Masukkan Detik: ";
        cin>>c;
        jam=3600*a;
        menit=60*b;
        detik=c;
        hasil= jam+menit+detik;
        cout<<a<<" Jam "<<b<<" Menit "<<c<<" Detik";
        cout<<"\n\nMaka konversinya adalah ->"<<hasil<<" detik";
	return 0;        
}
