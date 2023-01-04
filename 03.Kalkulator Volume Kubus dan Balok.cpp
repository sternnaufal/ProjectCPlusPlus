#include <iostream>
using namespace std;
int main() {
    int pilihan;
    double p, l, t, s, hasil;
    cout<<"Selamat datang di Kalkulator Volume Kubus dan Balok";
    cout<<"\nSilahkan Pilih Bangun Ruangnya";
    cout<<"\n1.Kubus";
    cout<<"\n2.Balok";
    cout<<"\nPilihanmu ->";
    cin>>pilihan;
    if(pilihan==1) {
    cout<<"Kamu memilih kubus...";
    goto kubus;
    }
    else if(pilihan==2) {
    cout<<"Kamu memilih Balok...";
    goto balok;}
    kubus: 
    cout<<"\n\n---Kalkulator Kubus---\n";
    cout<<"Masukkan Sisi :";
    cin>>s;
    hasil= s*s*s;
    cout<<"\nMaka hasilnya adalah "<<hasil<<"cm3";
    goto terimakasih;
    balok:
    cout<<"\n\n---Kalkulator Balok---\n";
    cout<<"\nMasukkan Panjang :";
    cin>>p;
    cout<<"Masukkan Lebar :";
    cin>>l;
    cout<<"Masukkan Tinggi :";
    cin>>t;
    hasil= p*l*t;
    cout<<"Maka hasilnya adalah "<<hasil<<"cm3";
    goto terimakasih;
    terimakasih:
    cout<<"\nTerimakasih telah menggunakan program ini";
}