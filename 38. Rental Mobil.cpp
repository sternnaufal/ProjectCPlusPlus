#include <iostream>
using namespace std;
int main()
{
    char nama[20],*jenis;
    int  kode,lama,harga,subtotal,total,ubay,diskon,ukem;
    cout <<"               STRUK PEMBAYARAN SEWA MOBIL              "<<endl;
	cout <<"--------------------------------------------------------------------------------"<<endl;          
    cout <<"kode            Jenis Mobil            Harga sewa/ Hari"<<endl;
    cout <<"1                 Sedan                    Rp. 350.000 "<<endl;
    cout <<"2                 Mini Bus                 Rp. 500.000 "<<endl;
    cout <<"3                 Bus                      Rp. 800.000 "<<endl;
    cout <<"-------------------------------------------------------------------------------"<<endl;
    cout <<"                       rincian rental                      "<<endl;
    cout <<"-------------------------------------------------------------------------------"<<endl;
    cout <<"Nama Penyewa             = ";cin>>nama;
    cout <<"Kode Mobil (1/2/3)       = ";cin>>kode;
                switch (kode)
                                {                             
                                                case 1:
                                                                               
                                                                                                jenis="sedan";
                                                                                                harga=350000;
                                                                                                break;
                                                case 2:
                                                                               
                                                                                                jenis="Mini Bus";
                                                                                                harga=500000;
                                                                                                break;
                                                case 3:
                                                                               
                                                                                                jenis="Bus";
                                                                                                harga=800000;
                                                                                                break;
                                                default :
                                                cout<<"                         = menu yang anda maksud tidak tersedia";
                                                return 0;
                                }
                cout <<"jenis Mobil              = "<<jenis<<endl;
                cout <<"Harga Sewa/Hari          = Rp."<<harga<<endl;
                cout <<"Lama Sewa                = ";cin>>lama;
                                                subtotal = harga*lama;
                cout <<"Sub Total                = Rp."<<subtotal<<endl;
                                                if (lama >=14)
                                                diskon= (30*subtotal)/100;
                                                else
                                                diskon = 0;
                cout <<"Diskon                   = Rp."<<diskon<<endl;
                                                total=subtotal-diskon;
                cout <<"Total                    = Rp."<<total<<endl;
                cout <<"-----------------------------------------------------------"<<endl;
                cout <<"Uang Bayar               = Rp.";cin>>ubay;
                                                ukem=ubay-total;
                cout <<"Uang Kembali             = Rp."<<ukem<<endl;
                cout <<"-----------------------------------------------------------"<<endl;

return 0;
}
