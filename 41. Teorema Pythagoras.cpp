#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int cari;
    float A,B,C;
    cout<<"Selamat datang di Programku:"<<endl<<"Menghitung teorema pytagoras"<<endl;
    cout<<"pilih yang akan di cari:"<<endl;
    cout<<"           ____    Keterangan :"<<endl;
    cout<<"    3  ___|    |   	1.Sisi Depan"<<endl;
    cout<<"    __|        | 1 	2.Sisi Samping"<<endl;
    cout<<"  _|           |   	3.Sisi Miring"<<endl;
    cout<<" |_____________|   "<<endl;
    cout<<"        2          "<<endl;
    cout<<"masukkan nomornya:";
    cin>>cari;
    if (cari== 1 ) {
    	cout<<"Kamu akan mencari sisi Depan"<<endl;
        cout<<"masukkan sisi 2: ";
        cin>>B;
        cout<<"masukkan sisi 3: ";
        cin>>C;
        A=sqrt(pow(C,2)-pow(B,2));
        cout<<"hasilnya: "<<A;
    } else if (cari== 2){
    	cout<<"Kamu akan mencari sisi Samping"<<endl;
        cout<<"masukkan sisi 1: ";
        cin>>A;
        cout<<"masukkan sisi 3: ";
        cin>>C;
        B=sqrt(pow(C,2)-pow(A,2));
        cout<<"hasilnya: "<<B;
    } else if (cari==3){
    	cout<<"Kamu akan mencari sisi Miring"<<endl;
        cout<<"masukkan sisi 1: ";
        cin>>A;
        cout<<"masukkan sisi 2: ";
        cin>>B;
        C=sqrt(pow(B,2)+pow(A,2));
        cout<<"hasilnya: "<<C;
    } else {
        cout<<"masukkan dengan benar bagian mana yang akan di hitung"<<endl<<endl;
        main();
    }
    return 0;
}
