#include <iostream>
#include <string>
#include <stdio.h>
 
 
using namespace std;
 
int tarif(int a,int b){
   
    int harga = a*b;
   
    return harga;
   
}
 
int main(){
 
        char nama[20];
        int tb[3]={500,700,1000};
        char buku[20][20]={"Cerpen","Komik","Novel"};
        int jp,total;
        string a,kode;
        pp:
        cout<<"Program Perpustakaan\n";
   
        cout<<"---------------------------------------------------\n";
        cout<<"|   KODE BUKU   |   JENIS BUKU   |   TARIF BUKU   |\n";
        cout<<"---------------------------------------------------\n";
        cout<<"|       C       |   Cerpen       |  Rp 500        |\n";
        cout<<"|       K       |   Komik        |  Rp 700        |\n";
        cout<<"|       N       |   Novel        |  Rp 1000       |\n";
        cout<<"---------------------------------------------------\n";
        cout<<"Nama Peminjam    : ";
        cin>>nama;
        cout<<"Masukan Kode Buku    : ";
        cin>>kode;
   mn:
        if(kode=="C"||kode=="c"){
       
            cout<<"Buku yang anda pinjam Berjenis Cerpen\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[0]);
       
            cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[0];
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)? ";
            cin>>a;
            if(a=="Y"||a=="y"){
            	goto pp;
			}
			else{
				goto t;
			}
       
       
        }else if(kode=="K"||kode=="k"){
       
            cout<<"Buku yang anda pinjam Berjenis Komik\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[1]);
           
            cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[1];
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;
             if(a=="Y"||a=="y"){
            	goto pp;
			}
			else{
				goto t;
			}
       
       
        }else if(kode=="N"||kode=="n"){
       
            cout<<"Buku yang anda pinjam Berjenis Novel\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[2]);
        cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[2];
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;
             if(a=="Y"||a=="y"){
            	goto pp;
			}
			else{
				cout<<"Kode yang ada masukkan salah";
				goto mn;
			}
        } 
		cout<<"\nTerimakasih Telah Menggunakan Program Ini";
}
