#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
    {
        char nama[80], nomor_hp[80], kategori;
        int harga, total_bayar, kembalian, berat, total;
 
        //Judul Program
        cout<<"================================="<<endl;  
        cout<<"\tAplikasi Berkah Laundry"<<endl;  
        cout<<"================================="<<endl<<endl;
 
        //Data Customer
        cout<<"\tData Customer Laundry"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Nama Customer   : ";cin>>nama;
        cout<<"No Handphone    : ";cin>>nomor_hp;
        cout<<"---------------------------------"<<endl;
 
        //Pilih Kategori
        cout<<"\tKategori Cucian"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"1. Reguler (2 Hari)"<<endl;
        cout<<"2. Ekspress (1 Hari)"<<endl;
        cout<<"3. Kilat (3 Jam)"<<endl;
        cout<<"4. Promo (2 Hari - Minimal 5Kg)"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Pilih No Kategori [1-4]  : ";cin>>kategori;
       
        //Kondisi Switch Case
        switch(kategori)
            {
                case '1' :
                    cout<<"Paket Reguler Cuci 2 Hari";
                    harga=10000;
                break;
                case '2' :
                    cout<< "Paket Ekspress Cuci 1 Hari";
                    harga=12000;
                break;
                case '3' :
                    cout<< "Paket Kilat Cuci 3 Jam";
                    harga=15000;
                break;
                case '4' :
                    cout<<"Paket Cuci Promo";
                    harga=8500;
                break;
                default:
                    cout<< "Nomor Kategori Yang Dimasukkan Salah";
                break;
            }
 
        cout<<"Berat Cucian (Kg)       : ";cin>>berat;  
        cout<<"-------------------------------------------"<<endl;
 
        //Result Pemesanan Jasa Laundry
        cout<<"\tDetail Pemesanan Berkah Laundry"<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"Nama Customer   : "<<nama<<endl;
        cout<<"No. Handphone   : "<<nomor_hp<<endl;
       
        //rumus perhitungan total
        total=harga*berat;
        cout<<"Total Harga     : Rp. "<<total<<endl;
        cout<<"============================================"<<endl;
        cout<<"Total Bayar     : Rp. ";cin>>total_bayar;
       
        //rumus perhitungan kembalian
        kembalian=total_bayar-total;
        cout<<"Kembalian       : Rp. "<<kembalian<<endl;
        cout<<"============================================"<<endl;
        cout<<""<<endl;
    }
